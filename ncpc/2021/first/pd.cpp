#include<iostream>    
#include<algorithm>    
using namespace std;    
    
int main(){    
   ios::sync_with_stdio(0);  
   cin.tie(0);  
   int x,y,x1,x2,y1,y2;  
   string s;    
   while(cin>>y1>>y2>>x1>>x2){    
        if(x1==0&&x2==0&&y1==0&&y2==0)break;    
        cin>>x>>y;    
        if ((x1<=x&&x<=x2) && (y1<=y&&y<=y2))     
            cout<<"IN"<<"\n";    
        else if (x<x1 && (y1<=y&&y<=y2))     
            cout<<"IN"<<"\n";    
        else if (x>x2 && (y1<=y&&y<=y2))     
            cout<<"IN"<<"\n";    
        else if (y<y1 && (x1<=x&&x<=x2))    
            cout<<"IN"<<"\n";     
        else    
            cout<<"OUT"<<"\n";    
        getline(cin,s);  
 }    
   return 0;    
}  
