# Prime Number Checker — C & Python

[![Tests](https://github.com/mohammmad357/Prime_Check/actions/workflows/tests.yml/badge.svg)](https://github.com/mohammmad357/Prime_Check/actions/workflows/tests.yml)

Two dependency-free implementations of an efficient prime-number checker. Both versions handle negative values, zero, one, invalid input, and large integers correctly.

## Algorithm

A number below 2 is not prime. After handling 2 and even numbers, the program checks only odd divisors up to the integer square root of the input. This reduces the running time from O(n) to O(sqrt(n)).

## Run the Python version

```bash
python Prime_Check.py
```

## Build and run the C version

```bash
gcc -std=c11 -Wall -Wextra -Werror -pedantic Prime_Check.c -o prime_check
./prime_check
```

On Windows, run `prime_check.exe` after compilation.

## Tests

```bash
python -m unittest -v
gcc -std=c11 -Wall -Wextra -Werror -pedantic -DPRIME_CHECK_NO_MAIN Prime_Check.c test_prime_check.c -o test_prime_check
./test_prime_check
```

GitHub Actions runs both suites for every push and pull request.

## Project structure

```text
Prime_Check.py       Python implementation and CLI
Prime_Check.c        C implementation and CLI
test_prime_check.py  Python unit tests
test_prime_check.c   C unit tests
```

## License

Released under the [MIT License](LICENSE).
