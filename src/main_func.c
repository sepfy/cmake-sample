#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "func.h"

void* test(void* data) {
  pthread_exit(NULL);
}


int main(void) {
  pthread_t t;
  pthread_create(&t, NULL, test, NULL);
  hello_func();
  return 0;
}
