#include "snekstack.h"
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>

void stack_push(stack_t *stack, void *obj) {
  if(stack->count == stack->capacity){
    size_t old_capacity = stack->capacity;
    stack->capacity = old_capacity * 2;
    void **new_ptr = (void **)realloc(stack->data, stack->capacity * sizeof(void *));
    if(new_ptr == NULL){
      stack->capacity = old_capacity;
      return;
    }
    stack->data = new_ptr;
  }
  stack->data[stack->count] = obj;
  stack->count++;
}


stack_t *stack_new(size_t capacity) {
  stack_t *stack = malloc(sizeof(stack_t));
  if (stack == NULL) {
    return NULL;
  }

  stack->count = 0;
  stack->capacity = capacity;
  stack->data = malloc(stack->capacity * sizeof(void *));
  if (stack->data == NULL) {
    free(stack);
    return NULL;
  }

  return stack;
}