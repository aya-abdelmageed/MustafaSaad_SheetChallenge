# 22th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Good Number](http://codeforces.com/contest/365/problem/A)
2. [Dice Tower](http://codeforces.com/contest/225/problem/A)

<hr>

<br><br>

## 1) [Good Number](http://codeforces.com/contest/365/problem/A)

### Code

```cpp
int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    string str;
    while (n--)
    {
        cin >> str;
        bool flag = true;
        for (int i = 0; i <= k; i++)
        {
            // check if the number i is in the string
            if (str.find(i + '0') == string::npos)
            {
                flag = false;
                break;
            }
        }
        cnt += flag;
    }
    cout << cnt << endl;
}
```

<hr>

<br><br>

## 2) [Dice Tower](http://codeforces.com/contest/225/problem/A)



### Code

```cpp
int main()
{
     int t, n;
    cin >> t >> n;
    vector<int> a(t), b(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
        // if any of the dice has the number n or 7 - n
        if (a[i] == n || b[i] == n || a[i] == 7 - n || b[i] == 7 - n)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
```