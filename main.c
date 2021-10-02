#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int arr[10];

  arr[0] = 3;

  int i;
  srand(time(NULL));
  for (i = 1; i < 10; i++) {
    arr[i] = rand();
  }

  int arr2[10];

  int *point_arr = &arr;
  int *point_arr2 = &arr2;

  point_arr += 9;

  int *p;

  for (p = point_arr2; p < point_arr2 + 10; p++) {
    *p = *point_arr;
    point_arr--;
  }



  int arr3[10];

  *point_arr = &arr;
  int *point_arr3 = &arr3;

  for (i = 0; i < 10; i++) {
    i[point_arr3] = (10 - i)[point_arr];
  }


  printf("Array: [");
  for (i = 0; i < 10; i++) {
    printf("%d", arr[i]);
    if (i != 9) {
      printf(", ");
    }
  }
  printf("]\n");

  printf("Reversed Array using *: [");
  for (i = 0; i < 10; i++) {
    printf("%d", arr2[i]);
    if (i != 9) {
      printf(", ");
    }
  }
  printf("]\n");

  printf("Reversed Array using []: [");
  for (i = 0; i < 10; i++) {
    printf("%d", arr3[i]);
    if (i != 9) {
      printf(", ");
    }
  }
  printf("]\n");

  return 0;
}