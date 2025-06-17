# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    s = str(input())
    c = 0
    for i in range(n):
        if s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u':
            c = 0
        else:
            c += 1
            if c > 3:
                break
        
    if c > 3:
        print("NO")
    else:
        print("YES")