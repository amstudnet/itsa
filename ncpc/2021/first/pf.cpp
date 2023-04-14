#include<iostream>      
#include<vector>      
#include<sstream>      
#include<algorithm>      
#include<cmath>      
using namespace std;      
bool cmp(pair<long,long>a,pair<long,long>b){     
    if(abs(a.first-a.second)!=abs(b.first-b.second))    
    return abs(a.first-a.second)<abs(b.first-b.second);    
          
}      
int main(){      
    long long t,f;      
    long long n;      
    long long start,end,sum;      
    cin>>t;         
    while(t--){      
        vector<pair<long ,long>>v;      
        vector<long long>v1;      
        cin>>n;    
        long long  x;  
        sum=0;      
        f=0;      
        int cnt=0;  
        for(int i=0;i<n;i++){  
            cin>>x;  
            v1.push_back(x);  
            cnt++;  
        }  
   
        //for(const auto &item : v1)cout<<item<<endl;      
        for(int i=0;i<cnt;i++){      
            start=i;  
            sum=0;       
            for(int j=i;j<cnt;j++){      
                sum+=v1[j];      
                if(sum%n==0){      
                    end=j;      
                    v.push_back({start,end});      
                }      
            }      
                 
        }      
    sort(v.begin(),v.end(),cmp);      
    for(const auto &item : v){  
        if(item.first!=item.second){  
        cout<<item.first<<" "<<item.second<<endl;      
        break;    
        }      
              
    }         
    }      
}  
