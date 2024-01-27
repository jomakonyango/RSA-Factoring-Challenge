#!/usr/bin/python3
import sys
import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def factorize(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i:
            continue
        if is_prime(i) and is_prime(n // i):
            return i, n // i
    return n, 1

def main():
    with open(sys.argv[1], 'r') as file:
        for line in file:
            n = int(line.strip())
            p, q = factorize(n)
            print(f"{n}={p}*{q}")

if __name__ == "__main__":
    main()
