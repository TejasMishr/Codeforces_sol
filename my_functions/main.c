// main.c

#include <stdio.h>
#include "my_function.h"

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = add_numbers(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
