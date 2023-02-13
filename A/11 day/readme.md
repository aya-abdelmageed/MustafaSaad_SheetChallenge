# 11th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Snacktower](https://codeforces.com/contest/767/problem/A)
2. [Oath of the Night's Watch](https://codeforces.com/contest/768/problem/A)

<hr>

<br><br>

## 1) [Snacktower](https://codeforces.com/contest/767/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i;
    int cnt = n;
    map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        visited[nums[i]] = true;
        while (visited[cnt]) // if the current number is equal to the number of the current level then print it and decrement the number of the current level
        {
            cout << cnt << " ";
            cnt--;
        }
        cout << "\n"; // if the current number is not equal to the number of the current level then print a new line
    }
}
```

<hr>

<br><br>

## 2) [Oath of the Night's Watch](https://codeforces.com/contest/768/problem/A)
### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i;
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] > nums[0] && nums[i] < nums[n - 1]) // if the current number is greater than the minimum number and less than the maximum number then it is not the minimum or the maximum number
            ans++;
    }
    // print the result
    cout << ans << endl;
}
```
