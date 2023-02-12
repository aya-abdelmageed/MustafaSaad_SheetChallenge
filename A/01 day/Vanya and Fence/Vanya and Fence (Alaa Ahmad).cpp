/* وقل اعملوا فسيرى الله عملكم ورسوله والمؤمنون */
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
   int n,m; cin>>n>>m;
   int arr[n];
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
       if (arr[i] <= m) sum++;
       else sum+=2;
   }
   cout<<sum;
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
