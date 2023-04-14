for _ in range(int(input())):    
    try:    
        s=input()    
        vis=[0]*len(s)    
        vis[0]=1    
        t=int(s[0])    
        sum1=t    
        while 1:    
               
            if vis[sum1%len(s)]!=1:    
                vis[sum1%len(s)]=1    
                    
            else:    
                break    
            sum1%=len(s)    
            t=int(s[sum1])    
            sum1+=t    
        f=1    
        for i in range(len(vis)):    
            if vis[i]==0:    
                f=0    
                break    
        if f==1:    
            print('Yes')     
        else:    
            print('No')    
                
    except:    
        break  
