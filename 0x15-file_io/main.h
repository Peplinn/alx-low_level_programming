#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>

/* Macros */
#define BUFFSIZE 1024
#define ELF_MAGIC_SIZE 4

/**
* struct Elf64_Ehdr - ELF-64 header structure
*
* @e_ident:     ELF identification bytes
* @e_type:      Object file type
* @e_machine:   Target machine architecture
* @e_version:   Object file version
* @e_entry:     Entry point virtual address
* @e_phoff:     Program header table file offset
* @e_shoff:     Section header table file offset
* @e_flags:     Processor-specific flags
* @e_ehsize:    ELF header size in bytes
* @e_phentsize: Size of program header entry
* @e_phnum:     Number of program header entries
* @e_shentsize: Size of section header entry
* @e_shnum:     Number of section header entries
* @e_shstrndx:  Index of the section name string table
*/

typedef struct Elf64_Ehdr
{
	uint8_t e_ident[ELF_MAGIC_SIZE];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/* Main Functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *msg);
void print_elf_header(const Elf64_Ehdr *header);

/* Help Functions */
int _strlen(char *str);
void print_exit(int code, const char *msg, const char *file);

#define ELF_MAGIC_SIZE 4


#endif /* MAIN_H */
