#include <stdio.h>
void print_numbers_reverse(int start, int end){
  	int i = start;
	while (i >= end){
    		printf("%d\n", i);
    		i--;
  	}
}

void print_numbers_reverses(int start, int end) {
  while (start >= end) {
    printf("%d\n", start);
    start--;
  }
}