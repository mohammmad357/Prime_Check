"""Prime-number checker with a small interactive command-line interface."""

from __future__ import annotations

import math


def is_prime(number: int) -> bool:
    """Return whether *number* is prime in O(sqrt(n)) time."""

    if number < 2:
        return False
    if number == 2:
        return True
    if number % 2 == 0:
        return False

    limit = math.isqrt(number)
    return all(number % divisor != 0 for divisor in range(3, limit + 1, 2))


def main() -> int:
    """Read one integer, print its classification, and return an exit code."""

    try:
        number = int(input("Enter an integer: ").strip())
    except ValueError:
        print("Error: please enter a valid integer.")
        return 1

    result = "prime" if is_prime(number) else "not prime"
    print(f"{number} is {result}.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
