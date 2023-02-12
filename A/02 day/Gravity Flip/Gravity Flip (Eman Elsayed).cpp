// Author Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort the vector in ascending order
    sort(v.begin(), v.end());
    // output the answer
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}