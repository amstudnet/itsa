for i in range(int(input())):  
    s=input().split()  
    s1=s[0]  
    s2=s[1:]  
    ans=min([int(i)for i in s2])  
    print(s1,end=" ")  
    print(int(ans)) 
