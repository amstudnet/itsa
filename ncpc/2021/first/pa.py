while 1:  
    try:  
        a,b=map(int,input().split())  
        if a==0:  
            break  
        if b%a==0:  
            print(b//a)  
        else:  
            print(b//a,end=" ")  
            print(b%a)  
          
    except:  
        break  
