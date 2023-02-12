# 10th Day of Mustafa Saad sheet Challenge

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
    long long mn = abs(nums[0] - nums[1]), mx = abs(nums[0] - nums[n - 1]); // calculate the distance between first two Lines and max distance between first and last Lines
    cout << mn << " " << mx << "\n";
    for (int i = 1; i < n; i++)
    {
        // here we calculate minimum distance for each Line and alse maximum distance
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
    if (a == b) // if the two string are equal then doesn't exist an uncommon subsequence
        cout << -1 << "\n";
    else
    {
        cout << max(a.size(), b.size()); // else then i can take the string that has greatest size
    }
}

```
