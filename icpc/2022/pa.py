t=int(input())  
for _ in range(t):  
    t=input()  
    ans=""  
    for i in range(0,len(t),3):  
        s=t[i:i+3]  
        if s=="UUU" or s=="UUC":  
            ans+="F"  
        elif s=="UUA" or s=="UUG" or s=="CUU" or s=="CUC" or s=="CUA" or s=="CUG":ans+="L"  
        elif s=="AUU" or s=="AUC" or s=="AUA":ans+="I"  
        elif s=="AUG":ans+="M"  
        elif s=="GUU" or s=="GUC" or s=="GUA" or s=="GUG":ans+="V"  
        elif s=="UCU" or s=="UCC" or s=="UCA" or s=="UCG" or s=="AGU" or s=="AGC": ans+="S"  
        elif s=="CCU" or s=="CCG" or s=="CCA" or s=="CCC":  
            ans+="P"  
        elif s=="ACU"or s=="ACG" or s=="ACA" or s=="ACC":  
            ans+="T"  
        elif s=="GCU"or s=="GCG" or s=="GCA" or s=="GCC":  
            ans+="A"  
        elif s=="UAU"or s=="UAC" :ans+="Y"  
        elif s=="CAU"or s=="CAC" :ans+="H"  
        elif s=="CAA"or s=="CAG" :ans+="Q"  
        elif s=="AAU"or s=="AAC" :ans+="N"  
        elif s=="AAA"or s=="AAG" :ans+="K"  
        elif s=="GAU"or s=="GAC" :ans+="D"  
        elif s=="GAA"or s=="GAG":ans+="E"  
        elif s=="UGU"or s=="UGC":ans+="C"  
        elif s=="UGG":ans+="W"  
        elif s=="CGU" or s=="CGC" or s=="CGA" or s=="CGG" or s=="AGA" or s=="AGG":ans+="R"  
        elif s=="GGU"or s=="GGG" or s=="GGA" or s=="GGC":ans+="G"  
        elif s=="UAA"or s=="UGA" or s=="UAG" :break  
    print(ans) 
