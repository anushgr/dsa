# cook your dish here
t = int(input())

for _ in range(t):
    a , b , c, d, e = map(int, input().split())
    l1 = [a + b, b + c, c + a]
    l2 = [c, a, b]
    c = 0
    
    for i in range(len(l1)):
        if l1[i] <=d and l2[i] <= e:
            print("YES")
            c = 1
            break
    
    if c == 0:
        print("NO")
        