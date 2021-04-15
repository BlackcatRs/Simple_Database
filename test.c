#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
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

   // user1.first_name = "hello";
   ptr_user1->first_name = "hello";
   ptr_user1->age = 12;

   display_age(ptr_user1->first_name, &(ptr_user1->age));


   return(0);
}
*/

/*
typedef struct {
  char buffer[500];
} InputBuffer;

InputBuffer* new_input_buffer() {
  InputBuffer* input_buffer = malloc(sizeof(InputBuffer));
  strcpy(input_buffer->buffer, "hello_my_friend");
  // input_buffer->buffer = "hello";

  return input_buffer;
}


void print_input(InputBuffer* input_buffer) {
  printf("%s\n", input_buffer->buffer);
}

int main(int argc, char* argv[]) {
  InputBuffer* input_buffer = new_input_buffer();
  print_input(input_buffer);

}

*/


// void *memcpy(void *dest, const void * src, size_t n)
// memcpy(&(destination->username), source + USERNAME_OFFSET, USERNAME_SIZE);
// trying to unserstand why use & in front of a poiter destination->username give char **

typedef struct {
  char src[50];
  char dest[50];
} data;

int main () {
  // const char src[50] = "http://www.tutorialspoint.com";
  // char dest[50] = "Heloooo!!";

  data userdata;
  data *ptr_userdata = &userdata;

  strcpy(ptr_userdata->src, "srcText");
  strcpy(ptr_userdata->dest, "dstText");

  printf("Before memcpy dest = %s\n", ptr_userdata->src);
  memcpy(&(ptr_userdata->dest), &(ptr_userdata->src), strlen(ptr_userdata->src));
  printf("After memcpy dest = %s\n", ptr_userdata->dest);

   return(0);
}













// #fin
