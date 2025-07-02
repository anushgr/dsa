# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    d = list(map(int, input().split()))
    r = []
    
    a.sort()
    d.sort()
    
    i = j = 0
    cur = 0
    m = 0
    
    
    while i < n:
        if a[i] < d[j]:
            cur +=1 
            m = max(m , cur)
            i +=1
        else : 
            cur -= 1
            j +=1
            
    r.append(m)
    print(max(r))
    