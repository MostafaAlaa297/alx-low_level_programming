#include "main.h"

void print_times_table(int n)
{
  int i, j;

  if (n < 0 || n > 15) {
    return;
  }

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= n; j++) {
      _putchar((i * j) + '0');
      if (j < n) {
        _putchar(',');
        _putchar(' ');
      }
    }
    _putchar('\n');
  }
}
