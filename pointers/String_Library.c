#include "exercise.h"
#include <string.h>

int smart_append(TextBuffer *dest, const char *src) {
  if (dest == NULL || src == NULL) {
    return 1;
  }
  const int MAX_SIZE = 64;
  int src_len = strlen(src);
  int remaining_space = (MAX_SIZE - 1) - dest->length;
  if (src_len > remaining_space) {
    strncat(dest->buffer, src, remaining_space);
    dest->length = MAX_SIZE - 1;
    return 1;
  }else {
    strcat(dest->buffer, src);
    dest->length += src_len;
    return 0;
  }
}
