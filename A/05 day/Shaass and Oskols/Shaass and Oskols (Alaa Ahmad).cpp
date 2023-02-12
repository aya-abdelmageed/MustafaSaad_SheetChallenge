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
    int n;  cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int q; cin>>q;
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        if (y == 1)
        {
            int rVal = arr[x-1] -y;
            arr[x]+=rVal;
            arr[x-1] = 0;
        }
        else if (x == n)
        {
           int lVal = y -1;
           arr[x-2]+=lVal;
           arr[x-1] = 0;
        }
        else
        {
        int rVal = arr[x-1] -y;
        int lVal = y -1;
        arr[x-2]+=lVal;
        arr[x]+=rVal;
        arr[x-1] = 0;
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
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
