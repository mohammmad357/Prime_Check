#include <stdbool.h>
#include <stdio.h>

bool is_prime(int number)
{
    int divisor;

    if (number < 2) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }

    for (divisor = 3; divisor <= number / divisor; divisor += 2) {
        if (number % divisor == 0) {
            return false;
        }
    }
    return true;
}

#ifndef PRIME_CHECK_NO_MAIN
int main(void)
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        fprintf(stderr, "Error: please enter a valid integer.\n");
        return 1;
    }

    printf("%d is %s.\n", number, is_prime(number) ? "prime" : "not prime");
    return 0;
}
#endif
