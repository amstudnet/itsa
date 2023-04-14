#include<bits/stdc++.h>  
using namespace std;  
int a[105];  
int main()  
{  
    int kase;  
    cin>>kase;  
    while(kase--)  
    {  
        long long time=0,size;  
        cin>>size;  
        memset(a,0,sizeof(a));  
        for(int i=0;i<size;i++)  
        {  
            cin>>a[i];  
        }  
        for(int i=0;i<size;i++)  
        {  
            for(int j=0;j<size-1;j++)  
            {  
                if(a[j]>a[j+1])  
                {  
                    swap(a[j],a[j+1]);  
                    time++;  
                }  
            }  
        }  
        cout<<time<<endl;  
    }  
}  
