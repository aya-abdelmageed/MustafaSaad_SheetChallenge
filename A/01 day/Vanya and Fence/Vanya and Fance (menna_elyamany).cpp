#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
# define ll long long
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout << i << " ";   cout<<"\n";
#define rall(s) s.rbegin(), s.rend()
#define all(s) s.begin(), s.end()
#define mod 1000000007

using namespace __gnu_pbds;

using namespace std;

void M() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif

}





int main() {
    M();

    int n,h;                            cin>>n>>h;
    vector<ll>v(n);
    cin(v);
    ll c=0;
    for(int i=0;i<n;i++)      c+=(v[i]>h ? 2 : 1);

    cout<<c<<"\n";


}
