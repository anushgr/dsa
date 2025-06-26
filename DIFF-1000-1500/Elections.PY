# cook your dish here
t = int(input())

for _ in range(t):
    a , b , c = map(int, input().split())
    
    print("A" if a > 50 else "B" if b > 50 else "C" if c > 50 else "NOTA")