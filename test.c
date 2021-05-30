#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int main(int argc, char const *argv[]) {
  uint32_t nb = 1/2;
  printf("%d\n", nb);
  return 0;
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


     1       2      3       R
[   cp_2    cp_4   cp_6  newCp_8]

    2       4       6
1-2    3-4    5-6     7-

newChildMaxKey = 1

______________________________________________________________
Binary search
        1 3 6 7 9
searching for 9's index
min = 0
max = 4



index = 0+4/2 = 2
value(2) = 6 < 9 donc

min = index + 1 = 3
max = 4



index = 3+4/2 = 3
value(3) = 7 < 9

min = index + 1 = 4
max = 4


if min == max stop
_____________________________________________________


Binary search
        1 3 6 7 9

searching for key 2 (not exist)
min = 0
max = 4


index = 0+4/2 = 2
value(2) = 6 >= 2
min = 0
max = 2

index = 0+2/2 = 1
value(1) = 3 >= 2
min = 0
max = 1

index = 0+1/2 = 0
value(0) = 1 < 2
min = 1
max = 1


if min == max stop
return min
______________________________________________________________________

4       8       12       16       20

need to insert key 6 in parent node, it should be at index 1
i = 5
index = 1





*/
