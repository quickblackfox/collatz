#include <stdio.h>

int collatz_steps(int n) {
  int c = 0;
  while (n > 1) {
    n = n % 2 ? 3 * n + 1 : n / 2;
    c++;
  }
  return c;
}

int main() {
  int biggest_n, biggest_steps = 0;
  for (int i = 2;; i++) {
    int next = collatz_steps(i);
    if (next >= biggest_steps) {
      biggest_n = i;
      biggest_steps = next;
      printf("biggest n = %d, steps = %d\n", biggest_n, biggest_steps);
    }
  }
}
