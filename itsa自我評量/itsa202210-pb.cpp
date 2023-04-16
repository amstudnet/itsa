#include<iostream>  
using namespace std;  
  
int vis[1000];  
int ans[10000];  
int main(){  
    int n;  
    cin>>n;  
    for(int i=0;i<n;i++)cin>>ans[i];  
    int cnt=0;  
    for(int i=1;i<n;i++){  
        if(ans[i]>ans[i-1]&&ans[i]>ans[i+1]){  
            vis[i]=1;  
              
        }  
    }  
    vis[0]=0;  
    vis[n-1]=0;  
    for(int i=0;i<n;i++){  
        if(vis[i]==1)cnt++;  
    }  
    cout<<cnt<<endl;  
    for(int i=0;i<n;i++){  
        if(vis[i]==1){  
            cout<<ans[i]<<">>>>>"<<endl;  
        }  
        else{  
            cout<<ans[i]<<endl;  
        }  
    }  
      
      
}  
