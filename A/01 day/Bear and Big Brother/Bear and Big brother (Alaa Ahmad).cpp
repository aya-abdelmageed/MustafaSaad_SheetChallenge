// وقل  اعملوا فسيرى الله عملكم ورسوله والمؤمنون //
//--- Alaa Ahmad ---//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define  F first
#define S second
const int M = 100000007;          // Invincible :)
void Fast_Code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void Solve()
{
  int l,b; cin>>l>>b;
  int cnt = 0;
  while (l<= b)
  {
      l*=3;
      b*=2;
      cnt++;
  }
  cout<<cnt;
}
int main ()
{
   Fast_Code();
   ll t = 1; //cin>>t;
   while (t--)
   {
       Solve();
   }



}
