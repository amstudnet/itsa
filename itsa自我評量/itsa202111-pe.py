for i in range(int(input())):      
        a,b=map(int,input().split())  
        if a==12:a=0  
        if b==0:  
            a=12-a  
            b=60-b  
        else:  
            a=12-a-1  
            b=60-b  
        if a==0:a=12  
        if b==60:b=0  
        a=str(a)  
        b=str(b)  
        a=(2-len(a))*'0'+a  
        b=(2-len(b))*'0'+b  
        print(f"{a}:{b}")  
