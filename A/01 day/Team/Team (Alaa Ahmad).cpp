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
  int n; cin>>n;
  int cnt = 0;
  while (n--)
  {
      ll  cntOnes = 0, cntZeros = 0;
      int arr[3];
      for (int i = 0; i < 3; i++)
      {
          cin>>arr[i];
          if (arr[i] == 1) cntOnes++;
          else cntZeros++;
      }
      if (cntOnes>cntZeros) cnt++;
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
