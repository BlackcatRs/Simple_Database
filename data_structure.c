#include <stdio.h>
#include <stdlib.h>


typedef struct {
  char* buffer;
  int a;
} test;



int main() {
  test* input_buffer = malloc(sizeof(test));
  input_buffer->a = 53;

  //input_buffer->buffer = &str;
  input_buffer->buffer = "a";

  // input_buffer->buffer envoie la valeur
  // (mem addr)
  printf("%s\n", input_buffer->buffer);

  return 0;
}
