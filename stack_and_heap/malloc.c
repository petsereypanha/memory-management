#include "malloc.h"
#include <stdio.h>
#include <stdlib.h>

int *allocate_scalar_array(int size, int multiplier) {
  int *arr_ptr = malloc(size * sizeof(int));
  if(arr_ptr == NULL){
    printf("Memory allocation failed\n");
    exit(1);
  }
  for (int i = 0; i < size; i++) {
        arr_ptr[i] = i * multiplier;
  }
  return arr_ptr;
}
