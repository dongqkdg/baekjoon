n,m=map(int,input().split())
basket=[0]*n
for i in range(m):
    a,b,c=map(int,input().split())
    basket[a-1:b]=[c]*(b-a+1)
for i in range(n):
    print(basket[i],end=' ')
