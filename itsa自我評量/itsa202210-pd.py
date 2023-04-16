input()  
s=input()  
while 1:  
    ans=input().split()  
    if ans[0]==0:  
        break  
    a=ans[0]  
    st=[]  
    if a=="1":  
        b=ans[1]  
        c=ans[2]  
        for i in range(len(s)):  
            if s[i]==b or s[i]==c:  
                st.append(i+1)  
    elif a=="2":  
        b=ans[1]  
        c=ans[2]      
        for i in range(int(b),int(c)+1):  
            st.append(i)  
    else:  
        b=ans[1]  
        c=ans[2]  
        d=ans[3]  
        for i in range(int(b),int(c)+1):  
            st.append(i)  
        for i in range(len(s)):  
            if s[i]==d:  
                    st.append(i+1)  
    st=list(set(st))  
    st.sort()  
    print(*st,sep=" ")  
#RENSHYGENHOW  
