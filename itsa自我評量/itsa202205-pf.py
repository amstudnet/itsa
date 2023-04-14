import math  
t=int(input())  
for _ in range(t):  
    a,b,c,d,e,f=map(int,input().split())  
    sum=math.ceil(((c-a)*60+d-b)/60)*e*f  
    print(sum)  
