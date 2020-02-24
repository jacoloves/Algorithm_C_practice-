#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


float average(int *arr, int size) {
  int sum;
  printf("arr: %p\n", &arr);
  printf("size: %p\n", &size);
  printf("sum: %p\n", &sum);

  for(int i=0; i<size; i++) {
    sum += arr[i];
  }
   
  return (sum * 1.0f) / size;
}

int main() {
  int num = 123;
  int *p = &num;
  int s = 234;

  float f = 0.0;

  f = average(p, s);

  return 0;
}


