t = int(input())

for _ in range(t):
    
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    motu = a[::2]
    tomu = a[1::2]
    
    motu.sort(reverse=True)
    tomu.sort()
    
    for i in range(min(k, len(motu), len(tomu))):
        if tomu[i] < motu[i]:
            tomu[i], motu[i] = motu[i], tomu[i]
        else:
            break
            
    if sum(tomu) > sum(motu):
        print("YES")
    else:
        print("NO")


