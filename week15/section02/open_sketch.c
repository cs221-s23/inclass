#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("test.txt", 0);
    if (fd == -1)
        printf("failed");
    else {
        struct stat s;
        fstat(fd, &s);
        // size is s.st_size
    }
}
