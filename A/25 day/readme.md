# 25th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Ksenia and Pan Scales](http://codeforces.com/contest/382/problem/A)
2. [Launch of Collider](http://codeforces.com/contest/699/problem/A)

<hr>

<br><br>

## 1) [Ksenia and Pan Scales](http://codeforces.com/contest/382/problem/A)

### Code

```cpp
int main()
{
    string s;
    cin >> s;
    string before, after;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            flag = true;
            continue;
        }
        if (flag)
            after += s[i];
        else
            before += s[i];
    }
    string tmp;
    cin >> tmp;
    for (int i = 0; i < tmp.size(); i++)
    {
        if (before.size() < after.size())
            before += tmp[i];
        else
            after += tmp[i];
    }
    cout << (before.size() == after.size() ? before + "|" + after : "Impossible");
}
```

<hr>

<br><br>

## 2) [Launch of Collider](http://codeforces.com/contest/699/problem/A)



### Code

```cpp
int main()
{
    int n;
    cin >> n;
    string dir;
    cin >> dir;
    vector<int> corr(dir.size());
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> corr[i];
    }
    int mn = OO;
    for (int i = 0; i < dir.size(); i++)
    {
        if (dir[i] == 'R' && dir[i + 1] == 'L')
        {
            mn = min(mn, (corr[i + 1] - corr[i]) / 2);
        }
    }
    cout << (mn == OO ? -1 : mn) << endl;
}
```