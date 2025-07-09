# cook your dish here
t = int(input())
for _ in range(t):
    D, d, P, Q = map(int, input().split())
    
    k = D // d
    r = D%d
    
    total = d*(k*P+Q*(k*(k-1)) // 2)
    total += r*(P+ k * Q)
    
    print(total)
