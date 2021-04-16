#include <stdio.h>

typedef struct {
  char *first_name;
  int age;
} profile;

void display_age(char* first_name, int* age) {
  printf("hi %s \n", first_name);
  printf("age is %d\n", *age);
}

int main () {
   profile user1;
   profile *ptr_user1 = &user1;

   ptr_user1->first_name = "john";
   ptr_user1->age = 12;

   display_age(ptr_user1->first_name, &(ptr_user1->age));
   return(0);
}
