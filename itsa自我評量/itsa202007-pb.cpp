#include <cstdio>        
#include <sstream>        
#include <iostream>        
#include <cstring>  
#include <map>        
        
using namespace std;        
  
int main() {        
    int n;  
    int t;  
    while(cin>>n){  
        map<int,int>mp;  
        int cnt=0;  
        for(int i=0;i<n;i++){  
            cin>>t;  
            mp[t]++;  
        }  
        for(auto it=mp.begin();it!=mp.end();it++){  
            cnt++;  
        }  
        cout<<cnt<<endl;  
        for(auto it=mp.begin();it!=mp.end();it++){  
            cout<<it->first<<": "<<it->second<<endl;  
        }  
    }  
    return 0;        
}  
