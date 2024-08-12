#include<iostream>    
#include<vector>    
#include<set>    
#include<algorithm>    
using namespace std;    
vector<vector<int>>arr(105,vector<int>(105,0));    
vector<vector<bool>>vis(105,vector<bool>(105,1));    
set<string>s;    
string a,b;    
int len;    
    
int lcs(int n,int m){    
    for(int i = 1;i <= n;i++){    
        for(int j = 1;j <= m;j++){    
            if(a[i - 1] == b[j - 1])    
                arr[i][j] = arr[i - 1][j - 1] + 1;    
            else    
                arr[i][j] = max(arr[i - 1][j],arr[i][j - 1]);    
        }    
    }    
    return arr[n][m];    
}    
    
void traceback(int i,int j,string ans){    
    while(i && j){    
        if(a[i - 1] == b[j - 1]){    
            ans.push_back(a[i - 1]);    
            i--;j--;    
        }    
        else{    
            if(arr[i - 1][j] > arr[i][j - 1])    
                i--;    
            else if(arr[i - 1][j] < arr[i][j - 1])    
                j--;    
            else{    
                if(vis[i - 1][j]){    
                    traceback(i - 1,j,ans);    
                    if(arr[i - 1][j] == arr[i - 1][j - 1] && a[i - 2] != b[j - 2])    
                        vis[i - 1][j - 1] = 0;    
                }    
                if(vis[i][j - 1])    
                    traceback(i,j - 1,ans);    
                return;    
            }    
        }    
    }    
    reverse(ans.begin(),ans.end());    
    s.insert(ans);    
}    
    
int main(){    
    while(cin >> a >> b){    
        len = lcs(a.length(),b.length());    
        for(int i = a.length();i > 0;i--){    
            for(int j = b.length();j > 0;j--){    
                if(vis[i][j] && arr[i][j] >= len)    
                    traceback(i,j,"");    
            }    
        }    
        for(auto &i:s)    
            cout << i << "\n";    
        for(int i = 0;i < 105;i++){    
            arr[i].resize(105,0);    
            vis[i].resize(105,1);    
        }    
        s.clear();    
    }    

    return 0;    
}  
