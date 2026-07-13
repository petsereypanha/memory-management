#include "dangerous_push_scary.h"
#include "stdlib.h"

void scary_double_push(stack_t *s) {
  stack_push(s, (void *)1337);
  int *heap_ptr = malloc(sizeof(int));
  if (heap_ptr == NULL) {
     return; 
  }
  *heap_ptr = 1024;
  stack_push(s, (void *)heap_ptr);
}
