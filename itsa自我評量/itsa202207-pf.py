while 1:    
    try:    
        n=int(input())    
        st=[]    
        for i in range(n):st.append(list(map(str,input().split())))    
        st.sort(key=lambda x:int(x[1]))    
        data=[]    
        data.append(st[0][0])    
        bs=int(st[0][1])+int(st[0][2])    
        st.pop(0)    
        while st!=[]:  
            st.sort(key=lambda x:(int(x[-1]),int(x[3])))  
            for i in range(len(st)):  
                if int(st[i][1])<=bs:  
                    data.append(st[i][0])    
                    bs+=int(st[0][2])    
                    st.pop(st.index(st[i]))  
                    break  
        print(*data,sep=" ")         
    except:    
        break  
