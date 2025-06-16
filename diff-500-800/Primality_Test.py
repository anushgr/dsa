import math

t = int(input())
for _ in range(t):
    p = int(input())
    
    if p < 2:
        print("no")
        continue
    
    is_prime = True
    for i in range(2, int(math.sqrt(p)) + 1):
        if p % i == 0:
            is_prime = False
            break

    print("yes" if is_prime else "no")
