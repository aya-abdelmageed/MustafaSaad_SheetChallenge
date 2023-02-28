# 24th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Help Vasilisa the Wise 2](http://codeforces.com/contest/143/problem/A)
2. [Chewbaсca and Number](http://codeforces.com/contest/514/problem/A)

<hr>

<br><br>

## 1) [Help Vasilisa the Wise 2](http://codeforces.com/contest/143/problem/A)

### Code

```cpp
int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                for (int l = 1; l <= 9; l++)
                {
                    if (i != j && i != k && i != l && j != k && j != l && k != l && i + j == r1 && k + l == r2 && i + k == c1 && j + l == c2 && i + l == d1 && j + k == d2)
                    {
                        cout << i << " " << j << endl
                             << k << " " << l << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
}
```

<hr>

<br><br>

## 2) [Chewbaсca and Number](http://codeforces.com/contest/514/problem/A)



### Code

```cpp
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';
        n = min(n, 9 - n);
        if (i == 0 && str[i] == '9')
            continue;
        str[i] = n + '0';
    }
    cout << str << endl;
}
```