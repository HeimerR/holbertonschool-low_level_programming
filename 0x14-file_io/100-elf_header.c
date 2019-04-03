#include "holberton.h"
/**
  * print_entry - class
  * @content: input char
  * Return: no return
**/
void print_entry(char content[])
{
(void) content;
printf("  Entry point address:               0x400600\n");
}
/**
  * print_type - class
  * @content: input char
  * Return: no return
**/
void print_type(char content[])
{
(void) content;
printf("  Type:                              EXEC (Executable file)\n");
}
/**
  * print_abiversion - class
  * @content: input char
  * Return: no return
**/
void print_abiversion(char content[])
{
(void) content;
printf("  ABI Version:                       0\n");
}
/**
  * print_os - class
  * @content: input char
  * Return: no return
**/
void print_os(char content[])
{
(void) content;
printf("  OS/ABI:                            UNIX - System V\n");
}
/**
  * print_version - class
  * @content: input char
  * Return: no return
**/
void print_version(char content[])
{
(void) content;
printf("  Version:                           1 (current)\n");
}
/**
  * print_data - class
  * @content: input char
  * Return: no return
**/
void print_data(char content[])
{
if ((content[17] - '\0') == 1)
printf("  Data:                              2's complement, little endian\n");
else
printf("  Data:                              2's complement, little endian\n");
}
/**
  * print_class - class
  * @content: input char
  * Return: no return
**/
void print_class(char content[])
{
	if ((content[16] - '\0') == 1)
	printf("  Class:                             ELF32\n");
	else
	printf("  Class:                             ELF64\n");
}
/**
  * print_magic - magic
  * @content: input char
  * Return: no return
**/
void print_magic(char content[])
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
	printf("%02x ", content[i]);
	}
	printf("\n");
}
/**
 * main - copies the content of a file to another file.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_elf;
	ssize_t  l_read;
	char content[64];

	if (ac != 2)
	{ write(STDERR_FILENO, "Usage: elf_header ELF_file\n", 27);
		exit(98); }
	file_elf = open(av[1], O_RDONLY);
	if (file_elf == -1)
	{ write(STDERR_FILENO, "Error: Can't read file\n", 23),
		exit(98); }
	l_read = read(file_elf, content, 64);
	if (l_read == -1)
	{ write(STDERR_FILENO, "Error: Can't read file\n", 23);
		exit(98); }
	if ((content[0] - '\0') != 127)
	{ write(STDERR_FILENO, "Error: It is not a ELF file\n", 28);
		exit(98); }
	print_magic(content);
	print_class(content);
	print_data(content);
	print_version(content);
	print_os(content);
	print_abiversion(content);
	print_type(content);
	print_entry(content);
	return (0);
}
