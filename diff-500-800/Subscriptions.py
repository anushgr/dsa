# cook your dish here
import math
t = int(input())

for _ in range(t):
    n , x = map(int, input().split())
    
    d = math.ceil(n/6)
    print(d*x)