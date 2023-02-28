# 28th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Raising Bacteria](http://codeforces.com/contest/579/problem/A)
2. [BowWow and the Timetable](https://codeforces.com/contest/1204/problem/A)

<hr>

<br><br>

## 1) [Raising Bacteria](http://codeforces.com/contest/579/problem/A)

### Code

```cpp
int main()
{
    int n, cnt = 0;
    cin >> n;
    while (n > 0)
    {
        if (n & 1)
            cnt++;
        n /= 2;
    }
    cout << cnt << endl;
}
```

<hr>

<br><br>

## 2) [BowWow and the Timetable](https://codeforces.com/contest/1204/problem/A)




### Code

```cpp
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    cout << (count(s.begin(), s.end(), '1') > 1 ? (n + 1) / 2 : n / 2);
}
```