a,b=map(int,input().split())
n=list(range(a))
for i in range(b):
    c,d=map(int,input().split())
    n[c-1],n[d-1]=n[d-1],n[c-1]

for j in range(a):
    n[j]+=1
    print(n[j],end=" ")