#include "main.h"

typedef struct
{
	uint8_t e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint32_t e_entry;
	uint32_t e_phoff;
	uint32_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} ElfHeader;

void display_elf_header(const ElfHeader *header)
{
	printf("Magic: ");
	for (int i = 0; i < 16; ++i)
	{
	printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %d-bit\n",
			header->e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", header->e_ident[5] == 1 ?
			"Little Endian" : "Big Endian");
	printf("Version: %d\n", header->e_ident[6]);
	printf("OS/ABI: %d\n", header->e_ident[7]);
	printf("ABI Version: %d\n", header->e_ident[8]);
	printf("Type: 0x%x\n", header->e_type);
	printf("Entry point address: 0x%x\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	return (98);
	}

	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
	perror("Error opening file");
	return (98);
	}

	ElfHeader header;
	ssize_t bytes_read = read(fd, &header, sizeof(ElfHeader));

	if (bytes_read != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error reading ELF header\n");
	close(fd);
	return (98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}

