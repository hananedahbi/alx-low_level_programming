#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * error_exit - Display error message and exit with status code.
 * @msg: Error message.
 * Return: void.
 */
void error_exit(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_magic - Print ELF magic numbers.
 * @e_ident: ELF identification array.
 * Return: void.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%2.2x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		error_exit("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Cannot read file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit("Error: Cannot read header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file");

	printf("ELF Header:\n");
	print_magic(header.e_ident);
	printf("  Class:                             ");
	if (header.e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (header.e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else
		printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);

	/* Add more fields for other information */

	close(fd);
	return (0);
}
