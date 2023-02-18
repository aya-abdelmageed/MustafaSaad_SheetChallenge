#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i][i]);
        st.insert(v[i][n - i - 1]);
    }
    if (st.size() != 1)
    {
        cout << "NO" << endl;
        return;
    }
    char ch = *st.begin();
    st.clear();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - j - 1)
                continue;
            st.insert(v[i][j]);
        }
    }
    cout << (st.size() == 1 && ch != *st.begin() ? "YES" : "NO") << endl;
}