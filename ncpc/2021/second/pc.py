t=int(input())  
for _ in range(t):  
    a,b=input().split()  
    sum1=0  
    ans1=list(map(int,input().split()))  
    ans2=list(map(int,input().split()))  
    for i in range(len(ans1)):  
        if ans1[i]-ans2[i]>0:  
            sum1+=ans1[i]-ans2[i]  
    print(sum1)  
