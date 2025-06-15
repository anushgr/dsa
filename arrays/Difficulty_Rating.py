t = int(input())

while t > 0:
    n = int(input())
    d = list(map(int, input().split()))
    dec = 0
    # Your code goes here
    for i in range(n-1):
        if d[i]>d[i+1]:
            dec = 1
            break
    if dec == 0:
        print("Yes")
    else:
        print("No")
    t -= 1
