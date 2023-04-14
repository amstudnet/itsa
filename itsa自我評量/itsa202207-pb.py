t=int(input())  
for _ in range(t):  
    s=input()  
    st=[]  
    u="abcdefghijklmnopqrstuvwxyz"  
    p="ABCDEFGHIJKLMNOPQRSTUVWXYZ"  
    #for i in range(len(s)):  
       # if 'a'<=s[i]<='z':s[i].upper()  
       # else:s[i].upper()  
    for i in range(len(s)):  
        if s[i].isdigit():  
            st.append(str(int(s[i])+4))  
        elif s[i].isalpha():  
            if "a"<=s[i]<="z":  
                st.append(u[(u.index(s[i])+2)%26])  
            else:  
                st.append(p[(p.index(s[i])+2)%26])  
        else:st.append(s[i])  
    for i in range(len(st)):  
        if st[i].isalpha():  
            if 'a'<=s[i]<='z':print(st[i].upper(),end="")  
            else:print(st[i].lower(),end="")  
              
        else:    
            print(st[i],end="")  
    print()
