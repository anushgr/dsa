# cook your dish here
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    s = []
    
    for i in range(n):
        if a[i] <= k:
            k -= a[i]
            s.append('1')
        else:
            s.append('0')
    
    print("".join(s))
