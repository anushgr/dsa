# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    freq = {}
    valid = True
    for num in a:
        freq[num] = freq.get(num, 0) + 1
        if freq[num] > 2:
            valid = False
            break

    print("YES" if valid else "NO")
