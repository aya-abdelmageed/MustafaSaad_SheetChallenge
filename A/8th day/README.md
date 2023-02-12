# 8th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Helpful Maths](https://codeforces.com/contest/339/problem/A)
2. [Team Olympiad](https://codeforces.com/contest/490/problem/A)

<hr>

<br><br>

## 1) [Helpful Maths](https://codeforces.com/contest/339/problem/A)

### Code

```cpp
    string str, ans;
    cin >> str;
    for (auto &i : str)
    {
        if (i != '+')
            ans += i; // add number to ans only
    }
    sort(ans.begin(), ans.end()); // sort in ascending order
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]; // print number and + if not last number
        if (i != ans.size() - 1)
            cout << "+";
    }
```

<hr>

<br><br>

## 2) [Team Olympiad](https://codeforces.com/contest/490/problem/A)

### Code

```cpp
    int n;
    cin >> n;
    vector<int> one, two, three;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            one.push_back(i + 1); // there is a good at programming
        else if (x == 2)
            two.push_back(i + 1); // there is a good at math
        else
            three.push_back(i + 1); // there is a good at PE
    }
    int sz = min({one.size(), two.size(), three.size()}); // the minimum number of teams
    cout << sz << "\n";
    for (int i = 0; i < sz; i++) // print the teams one from each category
    {
        cout << one[i] << " " << two[i] << " " << three[i] << "\n";
    }
```
