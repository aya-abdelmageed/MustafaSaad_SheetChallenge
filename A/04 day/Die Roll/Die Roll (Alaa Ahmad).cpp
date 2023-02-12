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
void solve()
{
  int y,w; cin>>y>>w;
  int ans = max(y,w);
  string prob[6] = {"1/6","1/3", "1/2", "2/3", "5/6","1/1"};
  cout<<prob[6- ans];
}
int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

}
