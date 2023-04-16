#include<iostream>    
using namespace std;    
long long dp[1000005];    
long long ans[1000005];    
int main()    
{    
 long long t,n;    
 cin>>t;    
 cin.tie(0),ios::sync_with_stdio(0);    
    while(t--){    
        cin>>n;    
        for(int i=0;i<n;i++)cin>>ans[i];    
        for(int i=0;i<n;i++)dp[i]=max(dp[i-1],dp[i-2]+ans[i]);      
    cout<<dp[n-1]<<"\n";    
     }    
}  
