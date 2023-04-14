#include <iostream>  
#include <unordered_set>  
#include <cstring>  
#include <vector>  
  
using namespace std;  
int pre[10005];  
 int f(int root){  
      
      
    int son,tmp;  
    son=root;  
    while(root!=pre[root])root=pre[root];  
    while(son!=root){  
        tmp=pre[son];  
        pre[son]=root;  
        son=tmp;  
     }  
     return root;  
 }  
  
  
int main()  
{  
    int a,b,cas,root1,root2;  
    cin>>cas;  
    for(int i=1;i<=10004;i++)pre[i]=i;  
    while(cas--){  
          
        cin>>a>>b;  
        root1=f(a);  
        root2=f(b);  
        if(root1!=root2){  
            pre[root1]=root2;  
            cout<<"N\n";  
        }  
        else{  
            cout<<"Y\n";  
        }  
    }  
      
        
        
      
     
   
   
    return 0;  
}  
