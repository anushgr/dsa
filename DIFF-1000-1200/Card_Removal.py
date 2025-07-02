# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    c = list(map(int, input().split()))
    freq = {}
    
    for item in c:
        freq[item] = freq.get(item, 0) + 1
    
    mc = max(freq.values())
    
    print(n-mc)