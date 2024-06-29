for i in range(int(input())):        
    empty=input()        
    ans=[int(i)for i in input().split()]        
    ans2=sum(ans)        
    a=ans.count(3)        
    b=ans.count(6)        
    c=ans.count(9)        
    d=ans.count(0)        
    if len(ans)>1:        
        if ans2%9==0:        
            ans.sort(reverse=True)        
            print(' '.join(str(i)for i in ans))        
            continue        
        if ans2%9==3:        
            if a>0:        
                ans.remove(3)        
                        
                
            elif len(ans)==0:        
                print(-1)        
                continue        
        if ans2%9==6:        
            if b>0:        
                ans.remove(6)        
                        
            elif a>0:        
                ans.remove(3)        
                ans.remove(3)        
                        
            elif len(ans)==0:        
                print(-1)        
                continue        
    if a==0 and b==0 and c==0:        
        if d>0:        
            print(0)        
            continue        
        else:        
            print(-1)        
            continue        
    if len(ans)>0:        
        ans.sort(reverse=True)        
        print(' '.join(str(i)for i in ans))        
        continue        
    else:        
        print(-1)  
