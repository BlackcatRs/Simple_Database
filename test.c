#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[]) {
  // int user_age[2];
  // int *age = user_age;
  // printf("%d\n", sizeof(age));
  //
  // age++;
  // printf("%d\n", sizeof(age));

  int status =1;
  int age = 0;

  while (1) {
    scanf("%d", &status);

    switch (status) {
      case (1):
      break;
      case (0):
      printf("please enter 0 to exit \n");
      continue;
    }

  }

  printf("i am after switch statement\n");
  return 0;
}
