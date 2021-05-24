#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

#include <stdio.h>

int main() {
  int nb = 5;
  printf("%d\n", nb-6);
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

*/
