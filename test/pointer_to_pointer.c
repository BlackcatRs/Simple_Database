#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int age = 55;

  int *a = 0;
  a = &age;
  
  int **aa = &a;

  return 0;
}
