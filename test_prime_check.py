import unittest

from Prime_Check import is_prime


class PrimeCheckTests(unittest.TestCase):
    def test_primes(self) -> None:
        for number in (2, 3, 5, 7, 11, 29, 97, 9973):
            with self.subTest(number=number):
                self.assertTrue(is_prime(number))

    def test_non_primes(self) -> None:
        for number in (-7, 0, 1, 4, 9, 25, 100, 9999):
            with self.subTest(number=number):
                self.assertFalse(is_prime(number))


if __name__ == "__main__":
    unittest.main()
