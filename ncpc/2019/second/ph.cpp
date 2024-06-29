#include<iostream>   
using namespace std;   
   
int main(){   
 int t;cin >> t;   
  while(t--){   
        int ax,xb,cy,yd,ex,xy,yf;   
      cin >> ax >> xb >> cy >> yd >> ex >> xy >> yf;   
       int flag = 1;   
      if(ex > yf){   
            if(ax <= cy || xb <= yd){   
                flag = 0;   
          }   
      }   
      else if(ex < yf){   
           if(ax >= cy || xb >= yd){   
                flag = 0;   
          }   
      }   
      else if(ex == yf){   
         if(ax > cy || ax < cy || xb > yd || xb < yd){   
              flag = 0;   
          }   
      }   
       if(ax*xb == ex*(xy + yf) && cy*yd == (ex + xy)*yf && flag == 1) cout << "Yes" << endl;   
     else cout << "No" << endl;   
  }   
  return 0;   
}  
