t=int(input())  
for _ in range(t):  
    a,b,c,d=map(int,input().split())  
    sum1=0  
    if a>0 and b>0 and c>0 and d>0:  
        sum1+=a*b+a*c+b*a+b*d+c*a+c*d+d*c+d*b  
    elif a<=0 and b<=0 and c<=0 and d<=0:  
        sum1+=a*b+a*c+b*a+b*d+c*a+c*d+d*c+d*b  
    elif a>0 and b>0 and c>0 and d<=0:  
        sum1+=a*b+a*c+b*a+c*a+d  
    elif a>0 and b>0 and c<=0 and d>0:  
        sum1+=b*a+b*d+b*a+b*d+c  
    elif a>0 and b<=0 and c>0 and d>0:  
        sum1+=c*a+c*d+c*a+c*d+b  
    elif a<=0 and b>0 and c>0 and d>0:  
        sum1+=d*c+d*b+d*c+d*b  
    elif a>0 and b>0 and c<=0 and d<=0:  
        sum1+=a*b+a*b+c*d+c*d  
    elif a<=0 and b<=0 and c>0 and d>0:  
        sum1+=a*b+a*b+c*d+c*d  
    elif a<=0 and b>0 and c<=0 and d>0:  
        sum1+=a*c+a*c+b*d+b*d  
    elif a>0 and b<=0 and c>0 and d<=0:  
        sum1+=a*c+a*c+b*d+b*d  
    elif a>0 and b<=0 and c<=0 and d>0:  
        sum1+=a+b+c+d  
    elif a<=0 and b>0 and c>0 and d<=0:  
        sum1+=a+b+c+d  
    elif a<=0 and b<=0 and c<=0 and d>0:  
        sum1+=a*b+a*c+b*a+c*a+d  
    elif a<=0 and b<=0 and c>0 and d<=0:  
        sum1+=b*a+b*d+b*a+b*d+c  
    elif a<=0 and b>0 and c<=0 and d<=0:  
        sum1+=c*a+c*d+c*a+c*d+b  
    elif a>0 and b<=0 and c<=0 and d<=0:  
        sum1+=d*c+d*b+d*c+d*b  
    print(sum1)  
