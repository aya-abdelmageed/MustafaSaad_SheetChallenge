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
   int cnt = 0;
   int n; cin>>n;
   vector<pair<int,int>>vec;
   for (int i = 0; i < n; i++)
   {
       ll x,y; cin>>x>>y;
       vec.push_back(make_pair(x,y));
   }
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j< n; j++)
       {
           if (j == i) continue;
           if (vec[i].first == vec[j].second) cnt++;
       }
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