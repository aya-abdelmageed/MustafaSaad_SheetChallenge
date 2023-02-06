// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(4);
    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    cout << 4 - st.size();
    return 0;
}