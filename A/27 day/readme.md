# 27th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Yaroslav and Permutations](http://codeforces.com/contest/296/problem/A)
2. [Snow Footprints](http://codeforces.com/contest/298/problem/A)

<hr>

<br><br>

## 1) [Yaroslav and Permutations](http://codeforces.com/contest/296/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n && cin >> arr[i]; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > ceil(double(n) / 2.0))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
```

<hr>

<br><br>

## 2) [Snow Footprints](http://codeforces.com/contest/298/problem/A)



### Code

```cpp
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first, last;
    if (s.find('R') == string::npos)
    {
        last = s.find('L') - 1;
        first = s.find_last_of('L');
    }
    else
    {
        first = s.find('R');
        last = s.find_last_of('R');
        if (s.find_last_of('L') == string::npos)
            last++;
    }
    cout << first + 1 << ' ' << last + 1;
}
```