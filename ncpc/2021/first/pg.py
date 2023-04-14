for i in range(int(input())):  
    n=int(input())  
    k=bin(n)[2:].count("1")  
    print(n-k) 
