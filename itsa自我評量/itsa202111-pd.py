a=[0 for i in range(201)]  
a[0]=1  
for i in range(1,201):  
    for j in range(i,201):  
        a[j]+=a[j-i]  
for i in range(int(input())):  
        n=int(input())  
      
        print(a[n])  
