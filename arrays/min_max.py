t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    
    m = min(a)
    count = sum(1 for i in a if i > m)    
    print(count)
    
    t -= 1
