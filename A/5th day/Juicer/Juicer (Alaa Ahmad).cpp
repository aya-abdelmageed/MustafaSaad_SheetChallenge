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
      int n,b,d;
      cin >> n >> b >> d;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
          cin >> arr[i]; 
      }
      int sum = 0;
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] <= b)
        {
            sum += arr[i]; 
            if (sum > d)
            {
                sum = 0; 
                cnt++; 
            }
        }
      }
      cout<<cnt; 
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
