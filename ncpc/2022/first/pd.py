t=int(input())    
for _ in range(t):    
    num=int(input())    
    for _ in range(num):    
        input()    
    ans=input()    
    s=""    
    for i in ans:    
        i=i.lower()    
        if i=='a':    
            s+='0'    
            
        elif i=='b':    
            s+='10'    
        elif i=='c':    
            s+='110'    
        else:    
            s+='111'  
    print(len(s)) 
