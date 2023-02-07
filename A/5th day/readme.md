
# Fifth Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Shaass and Oskols](https://codeforces.com/contest/294/problem/A)
2. [Juicer](https://codeforces.com/contest/709/problem/A)

<hr>

<br><br>

## 1) [Shaass and Oskols](https://codeforces.com/contest/294/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<int> brids(n);
    for (auto &i : brids)
        cin >> i;
    int m;
    cin >> m;
    // if test = 4 6 3 , So i have 3 boxes
    // first box exist 1234 and second box exist 123456 and third box exist 123
    // if he shoot 2 4 , so the birds are 1234123 and second box it's brids will fly away and third box will be 12356 and so on

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        if (l - 1 >= 0)
        {
            brids[l - 1] += r - 1; // r - 1 because the bird in the box will fly to i - 1
        }
        if (l + 1 < n)
        {
            brids[l + 1] += brids[l] - r; // brids[l] - r because the bird in the box will fly to i + 1
        }
        brids[l] = 0; // the bird in the box will die
    }
    for (auto &i : brids)
        cout << i << endl;
    return 0;
}
```

<hr>

<br><br>

## 2) [Juicer](https://codeforces.com/contest/709/problem/A)

### Code

```cpp
int main()
{
    int n, b, d; // n = number of oranges , b = max size of orange Juicer , d = max size of waste box
    cin >> n >> b >> d;
    vector<int> vec(n);
    for (auto &i : vec)   cin >> i;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] <= b)  // if the orange size is less than or equal to the max size of orange Juicer it will be juiced
        {
            sum += vec[i]; // sum the size of the orange to the waste box
            if (sum > d) // if the waste box is full it will be emptied
            {
                sum = 0;
                cnt++;  // count the number of times the waste box is emptied
            }
        }
    }
    cout << cnt << endl; // print answer (number of times the waste box is emptied)
    return 0;
}
```
