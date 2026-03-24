l,n = map(int,input().split())
a = list(range(n))   # a는 내가 입력한 문자의 리스트 
for i in range(n):
    a[i] = input()
k = int(input())

b = []
for i in a:
    for j in range(len(i)-k+1):
        b.append(i[j:j+k])

uniquestr = list(set(b))
maxnum = list(range(len(uniquestr)))
for i in range(len(maxnum)):
    maxnum[i] = 0

for i in range(len(uniquestr)):
    for j in b:
        if uniquestr[i] == j:
            maxnum[i]+=1

print(max(maxnum))