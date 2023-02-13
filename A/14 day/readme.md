# 14th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Even Odds](http://codeforces.com/contest/318/problem/A)
2. [I Wanna Be the Guy](http://codeforces.com/contest/469/problem/A)

<hr>

<br><br>

## 1) [Even Odds](http://codeforces.com/contest/318/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> rates(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rates[i].first >> rates[i].second;
    }
    bool maybe = 1, equals = 1;

    for (int i = 0; i < n; i++)
    {
        // to check if all rates is constant to determine if it is rated or not
        equals &= (rates[i].first == rates[i].second);
        if (i > 0)  // also if rates is ordered
            maybe &= (rates[i].first <= rates[i - 1].first && rates[i].second <= rates[i - 1].second);
        if (rates[i].first != rates[i].second) // if there exist any changes it will be rated
        {
            cout << "rated\n";
            return;
        }
    }
    cout << (maybe && equals ? "maybe" : "unrated");
}
```

<hr>

<br><br>

## 2) [I Wanna Be the Guy](http://codeforces.com/contest/469/problem/A)
### Code

```cpp
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
```
