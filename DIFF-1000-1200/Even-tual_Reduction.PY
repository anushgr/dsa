# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    s = list(str(input()))
    freq = {}
    
    for i in s:
        freq[i] = freq.get(i, 0) + 1
    
    if any(v % 2 != 0 for v in freq.values()):
        print("NO")
    else :
        print("YES")