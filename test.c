#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[]) {
  int user_age[2];
  int *age = user_age;
  printf("%d\n", sizeof(age));

  age++;
  printf("%d\n", sizeof(age));

  return 0;
}
