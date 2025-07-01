# cook your dish here
t= int(input())

for _ in range(t):
    
    n = int(input())
    p = list(map(int, input().split()))
    
    a = p.index(1)
    b = p.index(n)
    
    if a == 0 and b == n-1:
        print(0)
        
    elif a > b:
        print(a+(n-b)-2)
        
        
    elif a < b:
        print(a+(n-b)-1)
    
