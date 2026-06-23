#include "exercise.h"
#include <stdio.h>

void concat_strings(char *str1, const char *str2) {
  int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
  int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
  str1[i] = '\0';
}
