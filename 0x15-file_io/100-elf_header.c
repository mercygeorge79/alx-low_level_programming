#include "main.h"

/**
* print_magic - Prints the ELF magic number
* @elf_header: Pointer to the ELF header structure
*/
void print_magic(Elf64_Ehdr *elf_header)
{
int i;

printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header->e_ident[i]);
printf("\n");
}

/**
* print_class - Prints the ELF class
* @elf_header: Pointer to the ELF header structure
*/
void print_class(Elf64_Ehdr *elf_header)
{
printf("  Class:                             ");
switch (elf_header->e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("None\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
* print_data - Prints the ELF data encoding
* @elf_header: Pointer to the ELF header structure
*/
void print_data(Elf64_Ehdr *elf_header)
{
printf("  Data:                              ");
switch (elf_header->e_ident[EI_DATA])
{
case ELFDATANONE:
printf("None\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
* print_version - Prints the ELF file version
* @elf_header: Pointer to the ELF header structure
*/
void print_version(Elf64_Ehdr *elf_header)
{
printf("  Version:                           %d", elf_header->e_ident[EI_VERSION]);
if (elf_header->e_ident[EI_VERSION] == EV_CURRENT)
printf(" (current)\n");
else
printf("\n");
}

/**
* print_osabi - Prints the ELF OS/ABI
* @elf_header: Pointer to the ELF header structure
*/
void print_osabi(Elf64_Ehdr *elf_header)
{
printf("  OS/ABI:                            ");
switch (elf_header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("Solaris\n");
break;
case ELFOSABI_IRIX:
printf("IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("TRU64 UNIX\n");
break;
case ELFOSABI_ARM:
printf("ARM architecture\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone (embedded) application\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
* print_elf_type - Prints the ELF file type
* @elf_header: Pointer to the ELF header structure
*/
void print_elf_type(Elf64_Ehdr *elf_header)
{
printf("  Type:                              ");
switch (elf_header->e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
* print_entry_point - Prints the entry point address
* @elf_header: Pointer to the ELF header structure
*/
void print_entry_point(Elf64_Ehdr *elf_header)
{
printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
* print_elf_header - Prints the information contained in the ELF header
* @elf_header: Pointer to the ELF header structure
*/
void print_elf_header(Elf64_Ehdr *elf_header)
{
printf("ELF Header:\n");

print_magic(elf_header);
print_class(elf_header);
print_data(elf_header);
print_version(elf_header);
print_osabi(elf_header);
printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
print_elf_type(elf_header);
printf("  Machine:                           %d\n", elf_header->e_machine);
printf("  Version:                           0x%x\n", elf_header->e_version);
print_entry_point(elf_header);
printf("  Start of program headers:          %lu (bytes into file)\n", (unsigned long)elf_header->e_phoff);
printf("  Start of section headers:          %lu (bytes into file)\n", (unsigned long)elf_header->e_shoff);
printf("  Flags:                             0x%x\n", elf_header->e_flags);
printf("  Size of this header:               %d (bytes)\n", elf_header->e_ehsize);
printf("  Size of program headers:           %d (bytes)\n", elf_header->e_phentsize);
printf("  Number of program headers:         %d\n", elf_header->e_phnum);
printf("  Size of section headers:           %d (bytes)\n", elf_header->e_shentsize);
printf("  Number of section headers:         %d\n", elf_header->e_shnum);
printf("  Section header string table index: %d\n", elf_header->e_shstrndx);
}

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr elf_header;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
return (1);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
return (1);
}

if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
close(fd);
return (1);
}

print_elf_header(&elf_header);

close(fd);
return (0);
}

