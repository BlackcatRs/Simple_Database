#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
// #include <sys/types.h>


int main() {
  char arr[100];

  // file descriptor
  int f_write = open("start.txt", O_RDONLY);
  // copy data from file to an array
  read(f_write, arr, 1);

  return 0;
}
