#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int number);

int main(void)
{
    const int primes[] = {2, 3, 5, 7, 11, 29, 97, 9973};
    const int non_primes[] = {-7, 0, 1, 4, 9, 25, 100, 9999};
    size_t index;

    for (index = 0; index < sizeof primes / sizeof primes[0]; ++index) {
        assert(is_prime(primes[index]));
    }
    for (index = 0; index < sizeof non_primes / sizeof non_primes[0]; ++index) {
        assert(!is_prime(non_primes[index]));
    }

    puts("C tests passed.");
    return 0;
}
