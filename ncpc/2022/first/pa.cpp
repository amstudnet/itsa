#include<iostream>  
#include<algorithm>  
using namespace std;  
long long ans[2000000];  
int main(){  
    long long t,num,x1,y1,x2,y2;  
    ios::sync_with_stdio(0);  
    cin.tie(0);  
    cin>>t;  
    while(t--){  
        cin>>num;  
        long long num2=num*num;  
        for(int i=0;i<num2;i++)cin>>ans[i];  
          
        cin>>x1>>y1>>x2>>y2;  
          
        int t1=ans[(x1-1)*(num)+(y1-1)];  
        int t2=ans[(x2-1)*(num)+(y2-1)];  
        stable_sort(ans,ans+num2);  
        //cout<<t1<<endl;  
        //cout<<t2<<endl;  
          
        auto l=lower_bound(ans,ans+num2,t1)-ans;  
        auto r=upper_bound(ans,ans+num2,t2)-ans;  
        //cout<<l<<endl;  
        //cout<<r<<endl;  
        cout<<r-l-2<<'\n';   
          
    }     
}   
/* 
2 
3 
1 2 5 
3 7 13 
9 11 15 
1 1 1 2 
5 
2 5 10 13 19 
3 7 11 15 22 
4 9 16 20 43 
8 14 17 31 66 
12 21 26 40 72 
2 2 3 4 
*/  
