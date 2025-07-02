t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    i = 0
    j = 0
    while True:

        if a[i] == 0:
            print(j)
            break
        elif (a[i] > a[i+1]) and a[i]!=0  and i < n:
                i = i+1
                if a[i] >= 0:
                    a[i] += 1
                else:
                    a[i] = 1
                
        else:
            if a[i] < 0:
                a[i] = 0

            print(j+a[i])
            break
        j += 1

        a = [x - 1 for x in a]
