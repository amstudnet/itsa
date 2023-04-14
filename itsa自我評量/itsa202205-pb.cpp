#include<iostream>  
#include<algorithm>  
#include<cmath>  
using namespace std;  
int main()  
{  
  long long n;  
  int t;  
  cin>>t;  
  while(t--){  
    cin>>n;  
    long long sum=1;  
    int cnt=1;  
    while (sum%n!=0){  
      sum%=n;  
      sum=sum*10+1;  
      cnt++;  
        
    }  
    cout<<cnt<<"\n";  
  }   
   
   
   
}  
