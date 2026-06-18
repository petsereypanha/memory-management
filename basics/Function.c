#include <stdio.h>

// ?
int max_sneklang_memory(int max_threads, int memory_per_thread) {
  return max_threads * memory_per_thread;
}
// don't touch below this line

void init_sneklang(int max_threads, int memory_per_thread) {
  printf("Initializing Sneklang\n");
  printf("Max threads: %d\n", max_threads);
  printf("Memory per thread: %d\n", memory_per_thread);
  int max_memory = max_sneklang_memory(max_threads, memory_per_thread);
  printf("Max memory: %d\n", max_memory);
  printf("====================================\n");
}

float add(int x, int y) {
    return (float)(x + y);
}


int main() {
  init_sneklang(4, 512);
  init_sneklang(8, 1024);
  init_sneklang(16, 2048);
  max_sneklang_memory(32, 3243);
  float result = add(10, 5);
  printf("result: %f\n", result);
  return 0;
}
