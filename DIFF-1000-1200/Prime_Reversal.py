t = int(input())

for _ in range(t):
    N = int(input())
    A = input().strip()
    B = input().strip()
    
    cA = A.count('0')
    cB = B.count('0')
    print("YES" if cA == cB else "NO")