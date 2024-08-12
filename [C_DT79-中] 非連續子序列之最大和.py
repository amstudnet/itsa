n=int(input())  
st=[]  
for i in range(n):  
    st.append(int(input()))  
dp = list(st)  
dp[1] = max(dp[1 ], dp[0])  
for i in range(2 , n):  
    dp[i] = max(max(dp[i], dp[i-1]), dp[i-2]+ st[i])  
print (dp[n-1])  
