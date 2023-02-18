# 17th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Valera and X](http://codeforces.com/contest/404/problem/A)
2. [Arpa’s hard exam and Mehrdad’s naive cheat](http://codeforces.com/contest/404/problem/A)

<hr>

<br><br>

## 1) [Valera and X](http://codeforces.com/contest/404/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // x represents the diagonal elements and y represents the other elements
    char x = a[0][0];
    char y = a[0][1];
    if (x == y)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (a[i][j] != x)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                if (a[i][j] != y)
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}
```

<hr>

<br><br>

## 2) [Arpa’s hard exam and Mehrdad’s naive cheat](http://codeforces.com/contest/404/problem/A)
### Code

```cpp
// use this function to calculate the power of a number in O(logn) time 
// fast power function
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    // use Mod 10 to get the last digit
    cout << power(1378, n, 10); 
}
```