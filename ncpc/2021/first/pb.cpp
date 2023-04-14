#include <bits/stdc++.h>  
using namespace std;  
const int inf=0x3f3f3f3f;  
// greedy prim 演算法   
//(dis,freq)  
// if freq same 找小的dis(近的)  
// else freq 找大的 (頻率高的)   
bool vis[300];  
struct point{  
    int y,dis,freq;  
    /* 
    bool operator<(const point&c)const{ 
    if(c.freq==this->freq)return c.dis>this->dis;//小到大是大到小  
     return c.freq<this->freq; 
    } 
    */  
};  
struct cmp{  
    bool operator()(auto a,auto b){  
        if(a.freq==b.freq)return a.dis>b.dis;  
    return a.freq<b.freq;  
    }  
      
};  
int start,final;  
point c;  
int n,m,first;  
vector<point>v[300];  
int main() {  
priority_queue<point,vector<point>,cmp>pq;  
while(cin>>n>>m>>first){  
   if(n==0&&m==0&&first==0)break;  
   memset(vis,0,sizeof vis);  
   for(int i=1;i<=n;i++){  
      v[i].clear();  
      //vis[i]=0;  
   }  
   for(int i=0;i<m;i++){  
    cin>>start>>final>>c.dis>>c.freq;  
    c.y=final;v[start].push_back(c);  
    c.y=start;v[final].push_back(c);  
   }  
     
   while (!pq.empty()) pq.pop();  
   for(auto x1:v[first])pq.push(x1);  
   cout<<first;  
   vis[first]=1;  
   n--;  
   while(!pq.empty()){  
    c = pq.top();  
    pq.pop();  
    if(vis[c.y]==1)continue;   
    vis[c.y]=1;  
    n--;  
    if(!n){  
        cout<<" "<<c.y<<endl;  
        break;  
    }  
    cout<<" "<<c.y;  
      
    for(auto x1:v[c.y])pq.push(x1);  
   }     
}  
/* 
4 5 3 
1 2 1 2 
2 3 2 3 
3 4 3 3 
4 1 4 2 
1 3 5 2 
 
 
 
 
3 2 4 1 
*/  
}  
