#include "main.h"

void more_numbers(void) {
    for (int count = 0; count < 10; count++) {
        for (int num = 0; num <= 14; num++) {
            if (num > 9) {
                _putchar(num / 10 + '0');
            }
            _putchar(num % 10 + '0');
        }
        _putchar('\n');
    }
}
