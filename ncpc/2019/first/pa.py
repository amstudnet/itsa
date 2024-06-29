import math  
ts=int(input())  
for _ in range(ts):  
    n=int(input())  
    p=3  
    ans=0  
    for i in range(2,n+1):  
        if i%2==0:  
            p=n-p  
        else:  
            p=(3+5*p)%n  
        if math.gcd(n,p)!=1:  
            ans=p  
            break  
    a1=math.gcd(ans,n)  
    a2=n//a1  
    if ans!=0:  
        print(f"{n} = {a1} * {a2}")  
    else:  
        print(f"{n} = 1 * {n}")  
