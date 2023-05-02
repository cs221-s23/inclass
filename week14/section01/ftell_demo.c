#include <stdio.h>

int main(int argc, char* argv[]) {
	FILE* fp = fopen(argv[1], "r");
	fseek(fp, 0L, SEEK_END);
	printf("The size of the file is: %ld bytes\n", ftell(fp));
}