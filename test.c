#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

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


int main() {
  recursion(1);
}


/*

get root page from struct table
get the right child from given right chid page num
left child is empty page/node

copy root content to left empty child
decomission left child from root

intialize root node

max cell 6
right = 3
left = 4

want to add 11
[ 2  3  5  6  7  9 ]

        [ 5 ]
[ 2  3 ]      [ 6  7  9 ]

3 keys and 4 child
[ key0-child0  key1-child1  key3-child1 ]

m = 15
k = 14

1 2 3 4 5 6 7 8 9 10 11 12 13 14



*/
