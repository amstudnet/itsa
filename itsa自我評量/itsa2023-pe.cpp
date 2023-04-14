#include<iostream>  
#include<algorithm>  
#include<cmath>  
using namespace std;  
bool f(long long h){  
    long long k=h;  
    long long sum=0,sum1=1;  
    while(k){  
        sum+=(k%10);  
        k/=10;  
    }  
    long long k1=h;  
    while(k1){  
        sum1*=(k1%10);  
        k1/=10;  
    }  
    if(sum1==sum){  
        return true;  
    }  
    else{  
        return false;  
    }  
}  
int main()  
{  
  long long n,g;  
    
  while(cin>>n){  
    g=pow(10,n-1);  
    for(int i=1;i<g;i++){  
        long long h=i;  
        if(f(h))cout<<h<<endl;  
    }     
      
  }   
   
   
   
}
