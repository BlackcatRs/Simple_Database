/*
trying to initialize struct member of type array like a pointer
using input_buffer->buffer = "hello";
but this is not working because the
member is an array of 500 char. so we need to use
strcpy(input_buffer->buffer, "hello_my_friend");
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc()

typedef struct {
  char buffer[500];
} InputBuffer;

InputBuffer* new_input_buffer() {
  InputBuffer* input_buffer = malloc(sizeof(InputBuffer));
  strcpy(input_buffer->buffer, "hello_my_friend");
  return input_buffer;
}


void print_input(InputBuffer* input_buffer) {
  printf("%s\n", input_buffer->buffer);
}

int main(int argc, char* argv[]) {
  InputBuffer* input_buffer = new_input_buffer();
  print_input(input_buffer);
}
