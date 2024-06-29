#include<iostream>  
using namespace std;  
int e[300][300];  
int dp[300][300];  
int main(){  
    int n;  
    int route;  
    int case1;  
    cin>>case1;  
    while(case1--){  
        cin>>n;  
        for(int i=0;i<n;i++){  
            for(int j=0;j<n;j++){  
                if(i==j)e[i][j]=0;  
                e[i][j]=1000000;  
            }  
        }  
        cin>>route;  
        int start,end,day;        
        while(route--){        
            cin>>start>>end>>day;        
            e[start][end]=day;    
            //e[end][start]=day;        
        }  
        for(int k=0;k<n;k++){        
        for(int i=0;i<n;i++){        
            for(int j=0;j<n;j++ ){        
                if(e[i][j]>e[i][k]+e[k][j]){        
                    e[i][j]=e[i][k]+e[k][j];        
                    }        
                }        
            }        
        }  
        bool flag=true;  
        for(int i=0;i<n;i++){  
            if(e[i][i]<0){  
                flag=false;  
                break;  
            }  
              
        }  
        if(!flag)cout<<"Wonderful Tour\n";  
        else cout<<"No Wonderful Tours\n";               
    }  
}  
