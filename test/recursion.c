#include <stdio.h>

void recursion(int answer) {
  switch (answer) {
    case 0:
      printf("case 0\n");
      break;
    case 1:
      for (size_t i = 0; i < 4; i++) {
        recursion(0);
        printf("%ld\n", i);
      }
  }
}

int main(int argc, char const *argv[]) {
  recursion(1);
  return 0;
}
