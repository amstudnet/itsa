#include<iostream>  
#include<cstring>  
using namespace std;  
int t;  
int ans[1000][1000];  
int main(){  
  cin>>t;  
  int n,m,l;  
  while(t--){  
    cin>>n>>m>>l;  
    memset(ans,0,sizeof ans);  
    while(l--){  
        int a,b;  
        cin>>a>>b;  
        a--;  
        b--;  
        ans[a][b]=1;  
        if(a-1>=0)ans[a-1][b]=1;  
        if(a+1<=n)ans[a+1][b]=1;  
        if(b-1>=0)ans[a][b-1]=1;  
        if(b+1<=m)ans[a][b+1]=1;  
        
    }  
    int f=1;  
    for(int i=0;i<n;i++){  
        for(int j=0;j<m;j++){  
            if(ans[i][j]==0){  
                f=0;  
                break;  
            }  
        }  
        if(f==0)break;  
    }  
    if(f==0)cout<<"N"<<endl;  
    else cout<<"Y"<<endl;  
      
      
  }   
  
}  
