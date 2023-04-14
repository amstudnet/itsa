#include<iostream>      
      
using namespace std;      
#define  inf 1000000       
int dp[30][30];      
int e[100][100];      
int main(){      
//flood warshell    
ios::sync_with_stdio(0);    
cin.tie(0);      
    int n;      
    int route;      
    cin>>n;      
    for(int i=1;i<=n;i++){      
        for(int j=1;j<=n;j++){      
            //if(i==j)e[i][j]=0;      
            //else   
           e[i][j]=inf;      
        }      
    }      
    cin>>route;      
    int start,end,day;      
    while(route--){      
        cin>>start>>end>>day;      
        e[start][end]=day;  
        e[end][start]=day;      
    }       
    for(int k=1;k<=n;k++){      
        for(int i=1;i<=n;i++){      
            for(int j=1;j<=n;j++ ){      
                if(e[i][j]>e[i][k]+e[k][j]){      
                    e[i][j]=e[i][k]+e[k][j];      
                }      
            }      
        }      
    }      
    cout<<e[1][n]<<endl;      
          
          
          
    return 0;      
}  
