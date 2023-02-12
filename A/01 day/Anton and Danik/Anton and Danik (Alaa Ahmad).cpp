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
   int n; cin>>n;
   string s; cin>>s;
   int cntA = 0, cntD = 0;
   for (int i = 0; i < n; i++)
   {
       if (s[i] == 'A') cntA++;
       else cntD++;
   }
   if (cntA > cntD) cout<<"Anton";
   else if (cntD > cntA) cout<<"Danik";
   else cout<<"Friendship";
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
