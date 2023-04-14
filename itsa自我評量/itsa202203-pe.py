#include<iostream>     
#include<cmath>     
using namespace std;     
     
int main()     
{     
      
      
 int n;     
 int t;  
 cin>>t;  
 while(t--){  
    cin>>n;     
 int ans[n+5];     
 int sum=0;     
 for(int i=0;i<n;i++)cin>>ans[i];     
 for(int i=0;i<n;i++)sum+=ans[i];     
 int jg=sum/4;     
 int flag=0;     
 for(int i=0;i<n;i++){     
    if(ans[i]>jg)flag=1;     
 }     
 if(!flag)cout<<"yes\n";     
 else cout<<"no\n";         
       
       
       
       
  }  
   
 //5 1 2 1 3 2 is not answer but the problem is ac     
}  
