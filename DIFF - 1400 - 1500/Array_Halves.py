t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    
    l = sorted(p, reverse=True)[:n]
    l_set = set(l)
    
    pos = []
    for i in range(2 * n):
        if p[i] in l_set:
            pos.append(i)
            
    
    pos.sort()
    
    c = 0
    for i in range(n):
        z = n + i
        c += abs(z - pos[i])
        
    print(c)
