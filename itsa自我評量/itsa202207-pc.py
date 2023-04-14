temp=[]  
name=[]  
cnt=[]  
total=0  
data=[]  
while 1:  
    s=input()  
    if s=="-1":break  
    n=int(input())  
    total+=n  
    temp.append(s)  
    cnt.append(s)  
    data.append([s,n])  
    input()  
for i in range(len(temp)):  
    if temp[i] not in name:  
        name.append(temp[i])  
#name=list(set(name))#商品名  
tcnt=[0]*len(name)#商品數  
vis=[0]*len(name)  
for i in range(len(name)):  
    for j  in range(len(cnt)):  
        if vis[i]==0:  
            if cnt[j]==name[i]:  
                tcnt[i]+=1  
    vis[i]=1  
vis2=[0]*len(name)  
price=[0]*len(name)  
for i in range(len(name)):  
    for j in range(len(data)):  
        if vis2[i]==0:  
            if name[i]==data[j][0]:  
                price[i]+=data[j][1]  
    vis2[i]=1  
for i in range(len(name)):  
    print(name[i],end=" ")  
    print(tcnt[i],end=" ")  
    print(price[i])  
    #print(name[i],tcnt[i],price[i])  
print(total)  
"""  
veg0000001  
12  
veg0000001  
12  
veg0000125  
15  
met0001234  
22  
met0001234  
22  
drk0020123  
22  
veg0000001  
22  
-1  
"""  
