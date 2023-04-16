#include <stdio.h>    
#include <stdlib.h>    
  
#define maxn 500    
int a[maxn][maxn]={0},n;    
    
void input(void);                   
int Is_Even(void);                  
int Warshall(void);                 
    
int main()    
{    
    int cas;    
    scanf("%d",&cas);    
    while(cas--){    
        input();    
    if(Is_Even()&&Warshall()) printf("Yes\n"); else printf("No\n");    
    }    
}    
    
void input(void)    
{    
    int i,j;    
        
    scanf("%d",&n);    
        
    for(i=0;i<n;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            scanf("%d",&a[i][j]);    
        }    
    }    
}    
int Is_Even(void)    
{    
    int count,i,j;    
    for(i=0;i<n;i++)    
    {    
        count=0;    
        for(j=0;j<n;j++)    
        {    
            count+=a[i][j];    
        }    
        if (count%2) return 0;    
    }    
    return 1;    
}    
    
int Warshall(void)    
{    
    int i,j,k;    
    for(i=0;i<n;i++)    
        for(j=0;j<n;j++)    
        {    
            if(a[j][i]==1)    
            {    
                for(k=0;k<n;k++)    
                    a[j][k]=a[j][k]+a[i][k]-a[j][k]*a[i][k];    
            }    
        }    
    for(i=0;i<n;i++)    
        for(j=0;j<n;j++)    
            if(a[i][j]==0) return 0;    
    return 1;    
}  
