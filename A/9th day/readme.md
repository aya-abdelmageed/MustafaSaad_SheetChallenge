# 9th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [New Password](https://codeforces.com/contest/770/problem/A)
2. [Presents](https://codeforces.com/contest/136/problem/A)

<hr>

<br><br>

## 1) [New Password](https://codeforces.com/contest/770/problem/A)

### Code

```cpp
int main()
{
    char ch = 'a';
    int n, k;
    cin >> n >> k;
    string s;
    for (int i = 0; i < n; i++)
    {
        cout << char(ch + (i % k)); // 'a' + 0
                                    // 'a' + 1 = 'b'
                                    // 'a' + 0 = 'a'  as cycle
    }
}
```

<hr>

<br><br>

## 2) [Presents][Presents](https://codeforces.com/contest/136/problem/A)
### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<int> gifts(n);
    int ai;
    for (int i = 0; i < n; i++)
    {
        cin >> ai;
        gifts[ai - 1] = i + 1; // remember that the gifts are numbered from 1 to n
    }
    for (int i = 0; i < n; i++)
        cout << gifts[i] << " "; // print the gifts
}
```
