# cook your dish here
t = int(input())

for _ in range(t):
    d1, d2, d3 = map(int, input().split())
    s1, s2, s3 = map(int, input().split())

    d_tot = d1+d2+d3
    s_tot = s1+s2+s3
    
    if d_tot == s_tot:
        if d1 == s1:
            if s2 == d2:
                print("TIE")
            else:
                print("DRAGON" if d2>s2 else "SLOTH")
        else:
            print("DRAGON" if d1>s1 else "SLOTH")
    else:
        print("DRAGON" if d_tot>s_tot else "SLOTH")
