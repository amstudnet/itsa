t=int(input())    
for _ in range(t):    
        
    a,b,c,d=map(int,input().split())    
     
            
    sum1=1    
    sum2=1    
    d2=d    
    d3=d  
    while a:    
        sum1*=d2    
        a-=1    
        d2-=1    
    d3-=c  
    if a >c:  
       a-=c  
    else:  
       b-=c  
    while b:    
        sum2*=d3    
        d3-=1    
        b-=1    
    print(sum1*sum2%(pow(10,9)+7))  
