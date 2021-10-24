import math


def lcm(a: int, b: int) -> int:
    y = a*b / math.gcd(a, b)
    return int(y)


def main():
    x = lcm(8, 12)

    print(x)


if __name__ == '__main__':
    main()
