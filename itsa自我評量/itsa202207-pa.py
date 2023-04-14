from fractions import Fraction  
from decimal import Decimal  
t=int(input())  
for _ in range(t):  
    a,b=input().split()  
      
    if '/' not in a or '/' not in b:  
        print('Input format error.')  
        continue  
    a1=a  
    b1=b  
    try:  
        eval(a1)  
        eval(b1)  
        f=1  
    except:  
        print('Input value error.')  
        continue  
          
    if f==1:  
        a=Fraction(a)  
        b=Fraction(b)  
        c=a+b  
        d=a*b  
        if c.numerator<c.denominator:  
            print(c)  
        else:  
            print(c.numerator//c.denominator,end=" ")  
            print(c-(c.numerator//c.denominator))  
        if d.numerator<d.denominator:  
            print(d)  
        else:  
            print(d.numerator//d.denominator,end=" ")  
            print(d-(d.numerator//d.denominator))  
#3/2 5/4  
