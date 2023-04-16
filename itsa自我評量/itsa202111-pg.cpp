#include<bits/stdc++.h>  
using namespace std;  
#define pb push_back  
#define fast cin.sync_with_stdio ( 0),cin.tie ( 0 ),cout.tie ( 0 );  
  
  
int main(){  
string s;  
cin>>s;  
sort(s.begin(),s.end());  
//cout<<s<<endl;  
do{  
 cout<<s<<endl;  
}while(next_permutation(s.begin(),s.end()));  
  
}  
