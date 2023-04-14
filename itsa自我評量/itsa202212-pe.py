while 1:  
    try:  
        player1=0  
        player2=0  
      
        s=input().split()  
        for  i in range(len(s)):  
            p=s[i][0].lower()  
            if p=="a":  
                p=1  
            elif p=='t':  
                p=10  
            elif p=='j' or p=='q' or p=='k':  
                p=10  
            else:  
                p=int(p)  
            if i%2==0:  
                if player1<22:  
                    player1+=p  
                else:  
                    print(f'player1 {(i)//2}')  
                    break  
            else:  
                if player2<22:  
                    player2+=p  
                else:  
                    print(f'player2 {(i)//2}')  
                    break  
          
    except:  
        break  
