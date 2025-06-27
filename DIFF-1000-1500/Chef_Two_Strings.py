# cook your dish here
t = int(input())

for _ in range(t):
    
    s1 = list(input().strip())
    s2 = list(input().strip())

    
    mini = 0
    maxi = 0

    for i, j in zip(s1, s2):
        
        if not (i == j or i == "?" or j == "?"):
            mini += 1
        if not (i == j and  i != "?"):
            maxi += 1
            
    print ( mini, maxi)