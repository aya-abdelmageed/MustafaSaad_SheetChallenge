# 23th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Alyona and Numbers](http://codeforces.com/contest/682/problem/A)
2. [Mountain Scenery](http://codeforces.com/contest/218/problem/A)

<hr>

<br><br>

## 1) [Alyona and Numbers](http://codeforces.com/contest/682/problem/A)

### Code

```cpp
int main()
{
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (m + i) / 5 - i / 5;
    }
    cout << ans << endl;
}
```

<hr>

<br><br>

## 2) [Mountain Scenery](http://codeforces.com/contest/218/problem/A)



### Code

```cpp
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> y(2 * n + 1);
    for (auto &i : y)
        cin >> i;
    for (int i = 1; i < 2 * n; i++)
    {
        if (k == 0)
            break;
        if (y[i - 1] < y[i] - 1 && y[i] - 1 > y[i + 1])
        {
            y[i]--;
            k--;
        }
    }
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}
```