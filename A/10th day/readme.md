# 9th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Lineland Mail](https://codeforces.com/contest/567/problem/A)
2. [Mahmoud and Longest Uncommon Subsequence](https://codeforces.com/contest/766/problem/A)

<hr>

<br><br>

## 1) [Lineland Mail](https://codeforces.com/contest/567/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (auto &i : nums)
        cin >> i;
    long long mn = abs(nums[0] - nums[1]), mx = abs(nums[0] - nums[n - 1]); // calculate the min and max for the first element
    cout << mn << " " << mx << "\n";
    for (int i = 1; i < n; i++)
    {
        // calculate the min and max for the current element
        cout << min(abs(nums[i] - nums[i + 1]), abs(nums[i] - nums[i - 1])) << " " << max(abs(nums[i] - nums[n - 1]), abs(nums[i] - nums[0])) << "\n";
    }
}
```

<hr>

<br><br>

## 2) [Mahmoud and Longest Uncommon Subsequence](https://codeforces.com/contest/766/problem/A)
### Code

```cpp
int main()
{
   string a, b;
    cin >> a >> b;
    if (a == b) // is two string are equal then there doesn't exist an uncommon subsequence
        cout << -1 << "\n";
    else // if not then the longest uncommon subsequence is the longest string
    {
        cout << max(a.size(), b.size());
    }
}
```
