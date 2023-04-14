a,b=map(int,input().split())  
st=[]  
for i in range(a):st.append(list(map(int,input().split())))  
while 1:  
    startx, starty, endx, endy=map(int,input().split())  
    cnt=0  
    startx-=1  
    starty-=1  
    endx-=1  
    endy-=1  
    for i in range(startx,endx+1):  
        for j in range(starty,endy+1):  
            cnt+=st[i][j]  
    print(cnt)  
