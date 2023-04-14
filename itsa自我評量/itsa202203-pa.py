def f(s):      
    prec={}      
    prec['(']=1      
    prec['+']=2      
    prec['-']=2      
    prec['*']=3      
    prec['/']=3      
    st=[]      
    postfix=[]      
    s=s.split()      
    for i in s:      
        if i.isdigit():      
            postfix.append(i)      
        elif i=="(":      
            st.append(i)      
        elif i==")":      
            ans=st.pop()      
            while ans!="(":      
                postfix.append(ans)      
                ans=st.pop()      
        else:      
            while st!=[] and (prec[st[-1]]>=prec[i]):      
                postfix.append(st.pop())      
            st.append(i)      
    while st!=[]:      
        postfix.append(st.pop())      
    return " ".join(postfix)      
t=int(input())      
for i in range(t):      
    s=input()      
    print(f(s)) 
