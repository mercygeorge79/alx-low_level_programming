#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Task 0: read_textfile */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1: create_file */
int create_file(const char *filename, char *text_content);

/* Task 2: append_text_to_file */
int append_text_to_file(const char *filename, char *text_content);

/* Task 3: cp */
void error_exit(int code, const char *message);
void cp_file(const char *file_from, const char *file_to);
int main(int argc, char **argv);

/* Task 4: elf_header */
#include <elf.h>
void print_magic(Elf64_Ehdr *elf_header);
void print_class(Elf64_Ehdr *elf_header);
void print_data(Elf64_Ehdr *elf_header);
void print_version(Elf64_Ehdr *elf_header);
void print_osabi(Elf64_Ehdr *elf_header);
void print_elf_type(Elf64_Ehdr *elf_header);
void print_entry_point(Elf64_Ehdr *elf_header);
void print_elf_header(Elf64_Ehdr *elf_header);
int main(int argc, char **argv);

#endif /* MAIN_H */

