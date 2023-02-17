# 15th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [football](http://codeforces.com/contest/43/problem/A)
2. [Olesya and Rodion](http://codeforces.com/contest/584/problem/A)

<hr>

<br><br>

## 1) [football](http://codeforces.com/contest/43/problem/A)

### Code

```cpp
map<string, int> mp; // map to store the name of the team and the number of times it appears
int main()
{
    int t = 1;
    cin >> t; // test cases
    while (t--)
    {
        string str;
        cin >> str;
        mp[str]++; // increase the number of times the team appears
    }
    int mx = 0;
    string ans;
    for (auto &i : mp)
    {
        if (i.second > mx) // find the team that appears the most
        {
            mx = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl; // print the name of the team
}

```

<hr>

<br><br>

## 2) [Olesya and Rodion](http://codeforces.com/contest/584/problem/A)

### Code

```cpp
int main()
{
    int n, t;
    cin >> n >> t;
    if (t < 10) // if t is less than 10 then we can print it n times
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else // if t is greater than 10 then we can print t and n - sz(t) zeros
    {
        if (n == 1)
        {
            cout << -1 << "\n";
            return;
        }
        cout << t;
        string st = to_string(t);
        n -= st.size();
        for (int i = 0; i < n; i++)
        {
            cout << 0;
        }
    }
}
```