#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	char* string = malloc(strlen(argv[1]));
	char* token = NULL;

	if (string == NULL) {
		perror("malloc fail");
		exit(1);
	}

	strncpy(string, argv[1], strlen(argv[1]));

    while ((token = strsep(&string, "/")) != NULL) {
        printf("%s\n", token);
    }

    free(string);
}