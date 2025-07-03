# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    
    a = list(map(int, input().split()))
    
    o = 0
    e = 0
    
    for i in a:
        if i%2 == 0:
            e +=1
        else:
            o += 1
    
    if o%2 == 0 and o != 0 :
        print("YES")
    else :
        print("NO")