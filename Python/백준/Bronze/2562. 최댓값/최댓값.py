m=[]
for i in range(9):
    n=int(input())
    m.append(n)
print(max(m))
print(m.index(max(m))+1)