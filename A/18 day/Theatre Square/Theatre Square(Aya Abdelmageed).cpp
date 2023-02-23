#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
   long long n,m,a;
   cin>>n>>m>>a;
   if(n%a == 0 && m%a == 0)
   cout<<(n/a)*(m/a)<<endl;
   else if(n%a != 0 && m%a == 0)
   cout<<((n/a)+1)*(m/a)<<endl;
   else if(n%a == 0 && m%a != 0)
   cout<<(n/a)*((m/a)+1)<<endl;
   else
    cout<<((n/a)+1)*((m/a)+1)<<endl;
  
    return 0;

}