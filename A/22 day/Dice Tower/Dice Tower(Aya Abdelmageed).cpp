#include <bits/stdc++.h>
#define el '\n'
using namespace std;
# define PI  3.14159265358979323846  /* pi */
int main()
{
   int n,x,a,b;
   cin >>n>>x;
   
   for(int i = 0; i < n; i++)
   {
       cin >>a>>b;
       if(a == x || a == 7-x || b == x || b == 7-x) // no faces will show again so it will be more than unique identify
        {       
            cout<<"NO\n";
            return 0;
        }
   }
   cout<<"YES\n";
}