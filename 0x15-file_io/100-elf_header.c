#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void display_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void read_elf_header(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        display_error("Failed to open file");
    }

    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        display_error("Failed to read ELF header");
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        display_error("Not an ELF file");
    }

    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\nClass:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown type");
    printf("Entry point address:               %lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    read_elf_header(argv[1]);

    return 0;
}
