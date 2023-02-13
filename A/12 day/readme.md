# 9th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Pangram](https://codeforces.com/contest/520/problem/A)
2. [Twins](https://codeforces.com/contest/160/problem/A)

<hr>

<br><br>

## 1) [Pangram](https://codeforces.com/contest/520/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower); // convert all characters to lower case
    map<char, int> mp;                                         // traverse the string and count the number of occurences of each character
    for (int i = 0; i < n; i++)
        mp[str[i]]++;
    cout << (mp.size() == 26 ? "YES" : "NO"); // if the number of occurences of each character is 26 (the number of characters in the alphabet) then the string is a pangram
}
```

<hr>

<br><br>

## 2) [Twins](https://codeforces.com/contest/160/problem/A)
### Code

```cpp
int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i, sum += i;                         // sum all the coins
    sort(nums.begin(), nums.end(), greater<int>()); // sort the array in descending order
    int sortedSum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (sortedSum > sum / 2) // if the sum of the coins that we have taken is greater than the sum of the rest of the coins then we have taken the minimum number of coins
            break;
        sortedSum += nums[i]; // add the current coin to the sum of the coins that we have taken
        cnt++;                // increment the number of coins that we have taken
    }
    // print the minimum number of coins that we have taken
    cout << cnt << endl;
}
```
