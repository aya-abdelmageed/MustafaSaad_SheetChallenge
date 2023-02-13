#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p;
    vector<int> X(p);
    map<int, int> mp; // use map to count the number of occurences of each number and check if it is equal to n or not to determine if they can pass all levels or not
    for (auto &I : X)
        cin >> I, mp[I]++;
    cin >> q;
    vector<int> Y(q);
    for (auto &I : Y)
        cin >> I, mp[I]++;
    cout << (mp.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
}