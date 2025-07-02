# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(input())
    
    if n % 2 == 0:
        l = n-1
    else:
        l = n-2
    for i in range(0,l,2):
        a[i], a[i+1] = a[i+1], a[i]
        
    #ascii - 97 to 122
    
    for i in range(n):
        a[i] = chr(97 - ord(a[i]) + 122)
        
    
    a = ''.join(a)
        
    print(a)