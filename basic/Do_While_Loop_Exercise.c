#include <stdio.h>

void print_numbers_reverse(int start, int end) {
  int i = start;
  do{
    printf("%d\n", i);
    i--;
  } while(i >= end);
}
