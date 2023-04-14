for _ in range(int(input())):    
    try:    
        st=[]    
        st1=[]    
        n=int(input())  
        #if n==1:  
            #print(8)  
            #continue  
        #if n==12:  
            #print(1)  
            #continue  
        t=n    
        sum1=0    
        while 1:    
            if t<10:    
                sum1=t*t    
            else:    
                while t:    
                    sum1+=(t%10)*(t%10)    
                    t//=10    
            if sum1 not in st:    
                st.append(sum1)    
            else:    
                tp=sum1    
                break    
            t=sum1    
            sum1=0    
        st=st[st.index(tp):]    
        print(len(st))    
    except:    
        break  
