# cook your dish here
t = int(input())

for _ in range(t):
    s = list(input())
    n = 0
    
    for i in range(len(s)):
        if s[i] == "<":
            s[i] = ">"
        elif s[i] == ">":
            s[i] = "<"
            
    for i in range(len(s)-1):
        if s[i] == ">" and s[i+1] == "<":
            n += 1
    print(n)