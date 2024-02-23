def count_trailing_zeros(n):
    res = 0

    i = 5
    while i <= n:
        res += n // i
        i *= 5

    return res

if __name__ == "__main__":
    number = 251
    print(count_trailing_zeros(number))
