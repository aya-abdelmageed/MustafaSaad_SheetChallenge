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
    string s, t;
    cin >> s >> t;
    int indexS = 0, indexT = 0; 
    while (indexS != s.size() and indexT != t.size())
    {
        if (s[indexS] == t[indexT])
        {
            indexS++; 
        }
        indexT++; 
    }
    cout << indexS + 1; 
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