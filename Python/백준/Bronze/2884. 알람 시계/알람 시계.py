h,m= map(int, input().split())

if m<45:
    if h==0:
        print(23, 15+m)
    else:
        print(h-1, m+15)
else:
    print(h, m-45)