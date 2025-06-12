#Find maximum in an Array

# cook your dish here
T = int(input())


for _ in range(T):
   N = int(input())
   M = list(map(int, input().split()))
   temp = M[0]
   for j in range(N):
      if M[j]>temp:
        temp = M[j]
   print(temp)
   