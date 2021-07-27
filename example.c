#include <stdio.h>
#include <string.h>

#define XXH_INLINE_ALL
#include "xxhash.h"

int main(int argc, char *argv[])
{
	XXH64_hash_t h;

	if(argc != 2)
	{
		puts("example 'An example string'\n"
			"Hashes the given string with XXH3");
		return 1;
	}

	h = XXH3_64bits(argv[1], strlen(argv[1]));
	printf("%016llx\n", h);

	return 0;
}
