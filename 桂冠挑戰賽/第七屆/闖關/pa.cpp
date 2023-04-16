#include<iostream>  
#include<algorithm>  
#include<cmath>  
using namespace std;  
int main()  
{  
  long long n,t;  
  cin>>n;  
  while(n--){  
    cin>>t;  
    long long t1=t;  
    long long t2=t;  
    long long sum=1;  
    while(t1%5==0){  
        sum*=5;  
        t1/=5;  
    }  
    while(t2%3==0){  
        sum*=3;  
        t2/=3;  
    }  
    cout<<sum<<endl;  
  }   
   
   
   
}  
