#include<iostream>   
#include<algorithm>   
#include<cmath>   
using namespace std;   
int main()   
{   
  long long n,g;   
  cin>>n;   
  int ans[4];   
  while(n--){   
   for(int i=0;i<4;i++)cin>>ans[i];   
   int cnt=0;   
 for(int i=0;i<4;i++){   
       for(int j=i+1;j<4;j++){   
         if(ans[i]>ans[j])cnt++;   
     }   
  }   
  if(cnt%2==0){   
      cout<<"A\n";   
 }   
  else{   
      cout<<"B\n";   
 }   
  }    
}  
