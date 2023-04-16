#每購買1顆車輪餅就會送1點，集滿3點可以多換1顆車輪餅，而且用點數換的車輪餅還是可以集點的。  
#每位同學都剛好要1顆，請問他最少買多少顆車輪餅才能剛好每人1顆？  
t=int(input())    
for _ in range(t):    
    n=int(input())# 17人    
    cnt=0  
    k=0  
    g=0  
    while cnt!=n:  
        if cnt%3==0:  
            k+=1  
              
        cnt+=1  
    print(n-k+1) 
