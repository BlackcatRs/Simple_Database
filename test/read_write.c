// Just use the optional third argument to open:
// int open(const char* pathname, int flags, mode_t mode);
// or
// open('path',O_WRONLY|O_CREAT,0640);

// so like this:
// open("blahblah", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSER | S_IRGRP | S_IROTH);


#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
  char arr_read[100];

  // file descriptor
  int f_read = open("textfile", O_RDONLY);
  int f_write = open("newfile", O_WRONLY | O_CREAT, 0700);

  // copy data from file to an array
  read(f_read, arr_read, 5);

  // write arr_read data to a arr_write
  write(f_write, arr_read, 5);

  return 0;
}
