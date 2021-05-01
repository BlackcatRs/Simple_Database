// void *memcpy(void *dest, const void * src, size_t n)
// trying to unserstand why use & in front of a pointer destination->username
// give us char **. this works beacause expect arg is void*, so we can
// use
// memcpy(&(ptr_userdata->dest), &(ptr_userdata->src),
  // strlen(ptr_userdata->src));
// memcpy(ptr_userdata->dest, ptr_userdata->src, strlen(ptr_userdata->src));

 // memcpy() copy the entire byte in a buffer into the file,
 // including any bytes (random junk)after the end of the string.

#include <stdio.h>
// use by strcpy(), memcpy(), strlen()
#include <string.h>

typedef struct {
  char src[50];
  char dest[50];
} data;

int main () {
  data userdata;
  data *ptr_userdata = &userdata;

  strcpy(ptr_userdata->src, "srcText");
  strcpy(ptr_userdata->dest, "dstText");

  printf("Before memcpy dest = %s\n", ptr_userdata->dest);
  // memcpy(&(ptr_userdata->dest), &(ptr_userdata->src),
    // strlen(ptr_userdata->src));
  memcpy(ptr_userdata->dest, ptr_userdata->src, strlen(ptr_userdata->src));
  printf("After memcpy dest = %s\n", ptr_userdata->dest);

   return(0);
}
