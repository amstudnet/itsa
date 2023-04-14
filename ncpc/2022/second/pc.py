t=int(input())  
for _ in range(t):  
    input()  
    st=[]  
    ans=list(map(int,input().split()))  
    for i in range(1,len(ans)):  
        st.append(ans[i]-ans[i-1])  
    sum=0  
    for i in st:  
        if i>0:sum+=i  
    print(sum)  
