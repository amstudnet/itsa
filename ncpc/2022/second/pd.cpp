#include<iostream>           
#include<vector>           
#include<cstring>           
#include<algorithm>           
using namespace std;  
const long long nmax=10000000;  
long long a[nmax];  
long long dp[nmax];  
long long l[nmax];  
long long r[nmax];            
int main(){           
    //cin.tie(0);       
    //ios::sync_with_stdio(0);       
    long long n,a,b,c,d;           
    while(cin>>n){           
        if(n==0)break;           
        vector<long long>v;//y           
        vector<long long>v2;//x           
        cin>>a>>b>>c>>d;           
        for(int i=0;i<=n;i++){           
            if(i==0)v.push_back(1);           
            else v.push_back((a*v[i-1]+b)%c);           
        }           
        for(int i=0;i<=n;i++){           
          v2.push_back((v[i]%d)-d/2);           
        }           
        //for(int i=0;i<=n;i++)cout<<v[i]<<" ";           
        //cout<<endl;           
        //for(int i=0;i<=n;i++)cout<<v2[i]<<" ";           
        //cout<<endl;  
        l[0]=0;r[0]=0;   
        for(int i=0;i<=n;i++){  
                  
                dp[i]=v2[i];  
            }  
        for(int i=1;i<=n;i++){  
                //dp[i]=max(dp[i],dp[i-1]+a[i]);  
                if(dp[i-1]+v2[i]>=dp[i]){  
                    dp[i]=dp[i-1]+v2[i];  
                    l[i]=l[i-1];  
                    r[i]=i;  
                }  
                else{  
                    l[i]=i;   
                    r[i]=i;   
                }  
                //printf("dp[%d]=%d, l=%d, r=%d\n",i,dp[i],l[i],r[i]);  
            }  
            long long ans=dp[0];  
            long long pos=0;  
            for(int i=1;i<=n;i++){  
                if(dp[i]>ans){  
                    ans=dp[i];  
                    pos=i;  
                }  
             }  
            cout<<ans<<" "<<l[pos]-1<<" "<<r[pos]<<endl;
      
               
}  
