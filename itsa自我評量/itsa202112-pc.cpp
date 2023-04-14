#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  
#include <string.h>  
 
#define NUM 10000000  
bool p[NUM];  
  
int main(void)  
{  
    int n,t;  
    scanf("%d",&t);   
    while(t--)  
    {  
        scanf("%d",&n);   
        memset(p,0,sizeof(char));  
        int a, b, min = NUM, max = -1;  
        for(int i = 0; i < n; i++)  
        {  
            scanf("%d%d", &a, &b);  
  
            if(min > a) min = a;  
            if(max < b) max = b;  
  
            for(int j = a; j < b; j++)  
                p[j] = 1;   
        }  
        int cnt = 0;  
        for(int i = min; i < max; i++)  
            if(p[i] == 1) cnt++;  
  
        printf("%d\n", cnt);  
    }  
  
    return 0;  
}  
