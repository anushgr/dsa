#Take discount or Not

t = int(input())

while t > 0:
    n, x, y = map(int, input().split())
    a = list(map(int, input().split()))
    # Your code goes here
    b = []
    for i in range(n):
        if a[i] < y:
          b.append(0)
        else:
          b.append(a[i] - y)
    if x+sum(b) < sum(a):
       print("COUPON")
    else:
       print("NO COUPON")
    t -= 1
