t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    t -= 1
    # Your code goes here
    f = s = float('-inf')
    for x in a:
        if x > f:
            s = f
            f = x
        elif x > s and x != f:
            s = x
    print(f + s)


        
