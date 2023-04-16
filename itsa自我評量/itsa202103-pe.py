s=list(map(int,input().split()))  
ans=input().split()  
x1=s[0]  
x2=s[1]  
x3=s[2]  
  
  
      
if ans[0]=="N":  
    if x1==1:x1=0  
    else:x1=1  
else:  
    pass  
if ans[1]=="A":  
    x2=x1&x2  
else:  
    x2=x1|x2  
if ans[2]=="A":  
    x3=x2&x3  
else:  
    x3=x2|x3  
      
print(x1,x2,x3)  
