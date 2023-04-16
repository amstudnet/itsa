t=int(input())  
for i in range(t):  
    a,b=map(int,input().split())  
    while a:  
        b+=1  
        b*=2  
        a-=1  
    print(b) 
