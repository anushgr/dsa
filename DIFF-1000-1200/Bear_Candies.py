# cook your dish here
t = int(input())

for _ in range(t):
    a , b = map(int, input().split())
    c = 0
    i = 1
    while True:
        if c == 0 :
            a = a - i
            c = 1
            if a < 0:
                print("Bob")
                break
            i = i+1
        
        if c == 1:
            b = b - i
            c = 0
            if b < 0:
                print("Limak")
                break
            i = i+1