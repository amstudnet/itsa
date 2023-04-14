#include<iostream>        
#include<algorithm>        
#include<time.h>      
#include<iomanip>      
using namespace std;        
int ans[200005];      
int dp[200005];      
      
int main(){        
int num,t,cnt;      
cin>>num;      
while(num--){      
    cin>>t;      
    for(int i=0;i<t;i++)cin>>ans[i];      
     int len=1;      
     for(int i=0;i<t;i++)dp[i]=1;      
         
     for(int i=1;i<t;i++){      
        for(int j=0;j<i;j++){      
            if(ans[i]>ans[j]){      
             dp[i]=max(dp[i],dp[j]+1);                
             }      
         }      
         len = max(len , dp[i]);      
     }      
     cout<<len<<endl;      
}      
// lis
