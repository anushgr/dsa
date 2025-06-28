# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    s = list(str(input()))
    freq = {}
    c = 0
    
    for i in s:
        freq[i] = freq.get(i, 0) + 1
    
    if freq.get('1', 0) > freq.get('0', 0)+1:
        c = 1 + freq.get('0', 0)
        
    else:
        c = freq.get('1', 0)

    print(c)

        