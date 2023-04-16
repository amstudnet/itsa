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
    long long sum=1;  
    int cnt=1;  
    while (sum%t!=0){  
      sum%=t;  
      sum=sum*10+1;  
      cnt++;  
        
    }  
    cout<<cnt<<"\n";  
  }   
   
   
   
}  
