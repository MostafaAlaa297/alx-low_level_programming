#include "main.h"

void print_to_98(int n) {

  if(n >= 0) {

    for(; n < 98; n++) {

      _putchar((n/10) + '0');
      _putchar((n%10) + '0');
      _putchar(',');
      _putchar(' ');

    }

    _putchar((n/10) + '0');
    _putchar((n%10) + '0');
    _putchar('\n');

  } else {

    for(; n > 98; n--)
    {
            _putchar((n/100) + '0');
            _putchar((n/10) + '0');
            _putchar((n%10) + '0');
            _putchar(',');
            _putchar(' ');
    }

    _putchar((n/100) + '0');
    _putchar((n/10) + '0');
    _putchar((n%10) + '0');
    _putchar('\n');

  }

}
