t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    t -= 1
    # Your code goes here
    count = 0
    for i in range(n):
        mini = min(b[i], a[i])
        maxi = max(b[i], a[i])
        if maxi <= 2*mini:
            count += 1
    print(count)
        
        
