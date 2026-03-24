a,b,c= map(int, input().split())

if a != b and b!=c and a!=c:
    if a>b and a>c:
        print(a*100)
    elif b>c:
        print(b*100)
    else:
        print(c*100)
        
elif a==b and a!=c and b!=c:
    print(1000+a*100)

elif a==c and a!=b and b!=c:
    print(a*100+1000)
    
elif b==c and b!=a and a!=c:
    print(b*100 + 1000)
    
else:
    print(a*1000+ 10000)
    