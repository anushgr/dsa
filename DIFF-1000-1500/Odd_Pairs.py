t = int(input())

for _ in range(t):
    n = int(input())
    odd_count = (n + 1) // 2
    even_count = n // 2
    print(odd_count * even_count * 2)