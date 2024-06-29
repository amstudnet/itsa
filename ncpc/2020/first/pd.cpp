#include<bits/stdc++.h>  
#pragma GCC optimize("Ofast","inline","-ffast-math")  
#pragma GCC target("avx,sse2,sse3,sse4,mmx")  
using namespace std;  
int main(){  
    //bwt 逆轉換   
    string s;  
    int n;  
    cin.sync_with_stdio(0);  
    cin.tie(0);  
    cout.tie(0);  
    while(cin>>n){  
          
        if(n==0)break;  
        cin.ignore();  
        getline(cin,s);  
        int n=s.length();  
        string a[n];  
        //sort(a,a+n);  
        for(int i=0;i<n;++i){  
            for(int j=0;j<n;++j)a[j]=s[j]+a[j];  
            sort(a,a+n);  
        }  
        string k=a[0];  
        for(int i=k.length()-1;i>-1;i--){  
            putchar(k[i]);  
            putchar(' ');  
        }  
        putchar('\n');  
        //for(int i=0;i<n;i++)cout<<a[i]<<endl;  
        //cout<<a[n-1]<<endl;  
        /* 
        7 
        BNN*AAA 
        5 
        OSL*O 
        0 
        */  
    }  
    return 0;  
}  
