#include<iostream>  
#include<algorithm>  
#include<cmath>  
#include<cstring>    
using namespace std;  
int dp[510];  
int w[1000];  
int v[1000];  
int main(){  
    int t,n,ans,person,p;  
    cin>>t;  
    while(t--){  
        memset(dp,0,sizeof(dp));  
        cin>>n;  
        for(int i=0;i<n;i++){  
            cin>>v[i];  
            cin>>w[i];  
              
        }  
        for(int i=0;i<n;i++){  
            for(int j=30;j>=w[i];j--){  
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);  
            }  
        }  
        cin>>person;  
        int sum=0;  
        while(person--){  
            cin>>p;  
            sum+=dp[p];  
        }  
        cout<<sum<<"\n";  
    }  
}  
