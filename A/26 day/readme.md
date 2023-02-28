# 26th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Polo the Penguin and Segments](http://codeforces.com/contest/289/problem/A)
2. [IQ Test](http://codeforces.com/contest/287/problem/A)

<hr>

<br><br>

## 1) [Polo the Penguin and Segments](http://codeforces.com/contest/289/problem/A)

### Code

```cpp
int main()
{
    ll n, k, l, r, sum = 0;
    cin >> n >> k;
    while (n-- && cin >> l >> r)
    {
        sum += (r - l + 1);
    }
    cout << k - (sum % k ?: k);
}
```

<hr>

<br><br>

## 2) [IQ Test](http://codeforces.com/contest/287/problem/A)




### Code

```cpp
int main()
{
    vector<vector<char>> v(4, vector<char>(4));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            map<char, int> mp;
            mp[v[i][j]]++, mp[v[i][j + 1]]++, mp[v[i + 1][j]]++, mp[v[i + 1][j + 1]]++;
            if (mp.size() == 1 || mp.begin()->second == 3 || mp.rbegin()->second == 3)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
```