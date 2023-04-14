import operator  
t=int(input())  
for _ in range(t):  
    st=[]  
    s=input()  
    cnt=0  
    f=0  
    st.append(s)  
    while 1:  
        c={}  
        for i in s:c[i]=s.count(i)  
        c=dict(sorted(c.items(),key=operator.itemgetter(0)))  
        news=""  
        for k,v in c.items():  
            news+=str(v)  
            news+=k  
        if news in st:  
            st.append(news)  
            break  
        s=news  
        st.append(news)  
    dic={}  
    tar=0  
    for i in range(len(st)):  
        dic[st[i]]=st.count(st[i])  
    for k,v in dic.items():  
        if v==2:  
            tar=k  
    for i in range(len(st)):  
        if st[i]==tar:  
            start=i  
            break  
    print(len(st)-(len(st)-start)+1)  
     
    #for i in range(len(st)):  
        #if st[i]!=f:  
            #cnt+=1  
    #print(cnt) 
