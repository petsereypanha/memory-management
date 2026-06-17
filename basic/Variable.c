#include <stdio.h>

int main() {
  int sneklang_int_size;
  sneklang_int_size = 64;
  sneklang_int_size = 32;
  printf("Sneklang int size: %d bits\n", sneklang_int_size);


  int x = 5;
  x = 10; // this is ok

  const int x = 5;
  x = 10; // error
  return 0;
}
