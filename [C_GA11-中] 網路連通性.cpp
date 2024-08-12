#include<iostream>    
#include<queue>    
using namespace std;    
#define  inf 1000000     
int e[100][100];    
int vis[100];  
int jg;  
int n;  
void dfs(int v){  
    vis[v]=1;  
    jg++;  
    for(int i=0;i<n;i++){  
        if(!vis[i]&&e[v][i]!=0){  
            dfs(i);  
        }  
    }  
}  
int main(){    
        
    cin>>n;    
    for(int i=0;i<n;i++){    
        for(int j=0;j<n;j++){    
            cin>>e[i][j];    
        }    
    }    
    //bool flag=false;  
    jg=0;  
      
      dfs(0);  
      if(jg==n){  
        cout<<1<<endl;  
      }  
      else{  
        cout<<0<<endl;  
      }  
    
}  
