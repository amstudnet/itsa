def solve(temp,a,b):  
    a=int(a)  
    b=int(b)  
    if temp=="+":  
        return a+b  
    elif temp=="-":  
        return a-b  
    elif temp=="*":  
        return a*b  
    else:  
        return a//b  
def f(s):  
    st=[]  
    s=s.split()  
    for i in s:  
        if i.isdigit():  
            st.append(i)  
        else:  
            temp=i  
            b=st.pop()  
            a=st.pop()  
            st.append(solve(temp,a,b))  
    print(st[0])  
n=int(input())  
for i in range(n):  
    s=input()  
    f(s)  
