#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>", argv[0]);
        return 0;
    }

    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
        if (fd == -1) {
            perror("open");
            return -1;
        }

    char *mydata = "testing file";
    int wr = write(fd, mydata, strlen(mydata));
        if (wr == -1) {
            perror("write");
            return -1;
        }

    close(fd);
    return 0;
}