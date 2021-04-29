// Input and output are normally sequential: each read or write takes place
// at a position in the file right after the previous one. When necessary,
// however, a file can be read or written in any arbitrary order.
// The system call lseek provides a way to move around in a file
// without reading or writing any data.


#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>      // printf()
#include <stdlib.h>     // exit()


int main() {
    // file file descriptor
    int fd = open("words.txt", O_RDONLY);
    if (fd < 0) exit(1); // error checking

    char word[4]; // read data

    // move the curser 4 bytes from current position
    off_t new_pos = lseek(fd, 4, SEEK_SET);
    read(fd, word, 3);
    word[4] = 0; // \0 of an array

    printf("Word @ pos %d: %s\n", new_pos, word);

    new_pos = lseek(fd, 1, SEEK_CUR); // Skip new line characters

    read(fd, word, 3);
    printf("Word @ pos %d: %s\n", new_pos, word);

    close(fd);

}
