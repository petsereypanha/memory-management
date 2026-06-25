#include "http.h"
#include <stdio.h>

char *http_to_str(http_error_code_t code) {
  switch(code){
    case HTTP_BAD_REQUEST:
      printf("400 Bad Request");
      break;
    case HTTP_UNAUTHORIZED:
      printf("401 Unauthorized");
      break;
    case HTTP_NOT_FOUND:
      printf( "404 Not Found");
      break;
    case HTTP_TEAPOT:
      printf( "418 I AM A TEAPOT!");
      break;
    case HTTP_INTERNAL_SERVER_ERROR:
      printf("500 Internal Server Error");
      break;
    default:
      printf("Unknown HTTP status code");
  }
}