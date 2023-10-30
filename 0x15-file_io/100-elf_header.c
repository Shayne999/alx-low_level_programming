#include "main.h"

void check_elf(unsigned char *e_id);
void magic_print(unsigned char *e_id);
void print_class(unsigned char *e_id);
void print_data(unsigned char *e_id);
void version(unsigned char *e_id);
void print_osabi(unsigned char *e_id);
void print_abi(unsigned char *e_id);
void e_type(unsigned int etype, unsigned char *e_id);
void e_entry(unsigned long int entry, unsigned char *e_id);
void e_entry(unsigned long int entry, unsigned char *e_id);
void close_elf(int elf);


/**
 * check_elf - checks if file is an Elf file
 * @e_id: array of elf magic numbers
 */

void check_elf(unsigned char *e_id)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_id[i] != 0x7f &&
			e_id[i] != 'E' &&
			e_id[i] != 'L' &&
			e_id[i] != 'F')
		{
			dprintf(2, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic_print - prints magic numbers of an ELF header
 * @e_id: array of elf magic numbers
 */

void magic_print(unsigned char *e_id)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_id[i]);

		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_class - prints class of an ELF header
 * @e_id: array of elf magic numbers
 */

void print_class(unsigned char *e_id)
{
	printf(" class:				");

	switch (e_id[ET_CLASS])
	{
		case ELFCLASS1:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("unknown: %x>\n", e_id[EI_CLASS);
	}
}


/**
 * print_data - returns the data of an ELF header
 * @e_id: array of elf magic numbers
 */

void print_data(unsigned char *e_id)
{
	printf(" Data:				");

	switch (e_id[ET_DATA])
	{
		case ELFDATA1:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement , little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement , little endian\n");
			break;
		default:
			printf("unknown: %x>\n", e_id[EI_DATA);
	}
}


/**
  * version - returns the version of an ELF header
 * @e_id: array of elf magic numbers
 */
 
void version(unsigned char *e_id)
{
	printf(" version:				%d", e_id[EI_VERSION])

	switch (e_id[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - returns the OS/ABI of an ELF header
 * @e_id: array of elf magic numbers
 */

void print_osabi(unsigned char *e_id)
{
	printf(" OS/ABI:				");
 
	switch (e_id[ET_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - SYSTEM V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRu64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("unknown: %x>\n", e_id[EI_OSABI);
	}
}

/**
 * print_abi - returns the ABI version of an ELF header
 * @e_id: array of elf magic numbers
 */

void print_abi(unsigned char *e_id)
{
	printf(" ABI Version:				%d\n",
		e_id[EI_ABIVERSION]);
}

/**
 * e_type - returns type of an ELF header
 * @etype: Elf type
 * @e_id: array of elf magic numbers
 */

void e_type(unsigned int etype, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		etype >>= 8;

	printf(" Type:				");

	switch (etype)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case REL:
			printf("REL (Relocatable file)\n");
			break;
		case EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("unknown: %x>\n", etype);
	}
}

/**
 * e_entry - returns entry point of an ELF header
 * @entry: Elf entry point
 * @e_id: array of elf magic numbers
 */

void e_entry(unsigned long int entry, unsigned char *e_id)
{
	printf(" Entry point address:				");

	if (e_id[EI_DATA] == ELFCLASS2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = ((entry << 16) | (entry >> 16);
	}

	if (e-id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		print("%#lx\n", entry);
}


/**
 * close - closes an ELF header
 * @elf: Elf file descriptor
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n" elf);
		exit(98);
	}
}


/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int o;
	ssize_t r;

	Elf64_Ehdr *h;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s <file>\n", argv[0]);
		exit(97);
	}

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(2, "Error: can't read file %s\n", argv[1]);
		exit(98);
	}

	h = malloc(sizeof(Elf64_Ehdr));

	if (h == NULL)
	{
		close_elf(o);
		dprintf(2, "Errro: can't read file %s\n" argv[1]);
		exit(98);
	}
	
	r = read(o, h, sizeof(Elf64_Ehdr));

	if (r == -1)
	{
		free(h);
		close_elf(o);
		dprintf(2, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}

	check_elf(h->e_id);
	printf("ELF Header:\n");
	magic_print(h->e_id);
	print_class(h->e_id);
	print_data(h->e_id);
	version(h->e_id);
	print_osabi(h->e_id);
	print_abi(h->e_id);
	_type(h->e_type, h->e_id);
	_entry(h->e_entry, h->e_id);

	free(h);
	close(o);
	return (0);
}
