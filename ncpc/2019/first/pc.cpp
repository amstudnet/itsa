#include <iostream>  
#include <cstring>  
#define  maxn  10000000  
long long ans[maxn];  
using namespace std;  
int main() {  
    //cin.tie(0);  
    //ios::sync_with_stdio(0);  
    int t;  
    cin>>t;  
     
    while(t--){  
         memset(ans,0,sizeof(ans));  
        int l,n;  
        cin>>l>>n;  
        while(n--){  
            int a,b;  
            cin>>a>>b;  
             
            for(int i=a;i<=a+b;i++)ans[i]=1;  
            for(int i=a;i>max(a-b,0);i--)ans[i]=1;  
              
        }  
        
        long long cnt=0;  
        for(int i=0;i<=l;i++){  
            if(ans[i])cnt++;  
        }  
        cout<<cnt<<"\n";  
          
    }  
      
  
    return 0;  
}  
