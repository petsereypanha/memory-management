#include "multiple_types_stack_push.h"
#include "stdlib.h"
#include <string.h>

void stack_push_multiple_types(stack_t *s) {
  float *float_ptr = malloc(sizeof(float));
  if (float_ptr == NULL) {
        return;
  }
  *float_ptr = 3.14f;
  stack_push(s, (void *)float_ptr);
  const char *str_constant = "Sneklang is blazingly slow!";
  size_t str_len = strlen(str_constant) + 1;
  char *str_ptr = malloc(str_len * sizeof(char));
  if (str_ptr == NULL) {
    return; 
  }
  strcpy(str_ptr, str_constant);
  stack_push(s, (void *)str_ptr);
}
