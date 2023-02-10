# 7th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Way Too Long Words](https://codeforces.com/contest/71/problem/A)
2. [Free Ice Cream](https://codeforces.com/contest/686/problem/A)

<hr>

<br><br>

## 1) [Way Too Long Words](https://codeforces.com/contest/71/problem/A)

### Code

```cpp
int main()
{
    string str;
    cin >> str;
    int sz = str.size();
    if (sz > 10) // if string length is strictly greater than 10
        cout << str[0] << sz - 2 << str[sz - 1] << endl;
    else // else print the string as it is
        cout << str << endl;

    return 0;
}
```

<hr>

<br><br>

## 2) [Free Ice Cream](https://codeforces.com/contest/686/problem/A)

### Code

```cpp
int main()
{
    // get input long long to avoid overflow since adding and subtracting 10^9
    long long q, d, cnt = 0;
    cin >> q >> d;
    while (q--)
    {
        char ch;
        int x;
        cin >> ch >> x;
        if (ch == '+' && x + d >= 0) // if x + d >= 0 then d += x
            d += x;
        else if (ch == '-' && d - x >= 0) // if d - x >= 0 then
            d -= x;
        else // if we will get negative value then we will not subtract x from d
            cnt++;
    }
    // print number of ice number of ice cream packs left after all operations, and number of kids that left the house in distress
    cout << d << " " << cnt << endl;
}
```
