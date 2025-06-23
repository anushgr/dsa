# cook your dish here
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    s = 0
    b = 0
    
    for i in range(n):
        s = s + a[i] - k
        if s < 0:
            print("NO " + str(i + 1))
            b = 1
            break
    if b == 0:
        print("YES")