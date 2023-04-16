dp = [[0] * 500 for j in range(500)]  
for i in range(1,500):  
        for  j in range(1,i+1):  
            if j==i:dp[i][j]=1  
            else :dp[i][j]=dp[i-1][j]*i//(i-j)  
  
a=int(input())  
for _ in range(a):  
    n,r,d=map(int,input().split())  
      
    ans=dp[n-1][r]+dp[n-1][r-1]  
    #print(ans)  
    s=""  
    while ans:  
        if ans%d<10:  
            s+=str(ans%d)  
        else:  
            s+=str(ans%d)  
        ans//=d  
    print(s[::-1])  
