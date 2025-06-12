#Search an element in an array

N, X = map(int, input().split())
C = list(map(int, input().split()))

if X in C:
    print("YES")
else:
    print("NO")