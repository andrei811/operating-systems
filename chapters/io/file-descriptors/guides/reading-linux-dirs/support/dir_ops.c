// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <sys/stat.h>

#include "utils/utils.h"

#define DIR_NAME	"dir"

static void open_directory(const char *dir_name)
{
	FILE *f;

	// Always fails because FILE * cannot handle directories.
	// Use open() instead.
	f = fopen(dir_name, "w");
	DIE(!f, "fopen");
}

int main(void)
{
	open_directory(DIR_NAME);
	return 0;
}
