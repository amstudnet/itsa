t=int(input())  
for _ in range(t):  
    a,b=map(int,input().split())  
    matrix=[]  
    for  i in range(b):  
        matrix.append(list(map(int,input().split())))  
    matrix = matrix[::-1]   
    res = []  
    for line in zip(*matrix):    
        res.append(list(line))  
    st=[]  
    for i in range(a):  
        sum=0  
        for j in range(b):  
            sum^=res[i][j]  
        st.append(sum)  
    for i in range(len(st)):  
        if i!=len(st)-1:  
            print(st[i],end=" ")  
        else:  
            print(st[i])
