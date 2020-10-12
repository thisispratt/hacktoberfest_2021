from functools import lru_cache


@lru_cache()
def fibonacci(n: int) -> int:
    """
    :param n: the place in the Fibonacci sequence
    :return: the nth number of the Fibonacci sequence
    """

    if n < 2:
        return n
    return fibonacci(n - 2) + fibonacci(n - 1)


if __name__ == '__main__':
    print(fibonacci(100))
