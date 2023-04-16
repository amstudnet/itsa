t=int(input())  
for _ in range(t):  
    ans=list(map(int,input().split()))  
    cnt=1  
    max=1  
    for i in range(1,len(ans)):  
        if ans[i]>ans[i-1]:  
            cnt+=1  
        else:  
            if cnt>max:  
                max=cnt  
            cnt=1  
    if cnt>max:  
        max=cnt  
    print(max-1)  
