t=int(input())  
for _  in range(t):  
    a,b,c,d=map(int,input().split())  
    #if a<=c and b<=d:print('YES')  
    if a*b<=c*d:print('YES')  
    else:print('NO')  
