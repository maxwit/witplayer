#pragma once
#include <stdio.h>
#include "types.h"

typedef enum {
	HTTP, LOCAL
} SoundFileType;

struct sound_file_into {
	const char *url;
	int fd;
	size_t size;
	SoundFileType type;
};

struct sound_file_info *sound_file_open(const char *URL);
int sound_file_close(struct sound_file_into *file);
size_t sound_file_load(struct sound_file_into *file, u8 *buff, size_t size);
