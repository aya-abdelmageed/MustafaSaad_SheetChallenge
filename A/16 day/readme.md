# 15th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Brain's Photos](https://codeforces.com/contest/707/problem/A)
2. [Dubstep](https://codeforces.com/contest/208/problem/A)

<hr>

<br><br>

## 1) [Brain's Photos](https://codeforces.com/contest/707/problem/A)

### Code

```cpp
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    map<char, bool> mp; // map to store the color of the pixel and check if it appears or not
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            mp[v[i][j]] = true; // mark the color of the pixel as true
        }
    }
    for (auto &i : mp)
    {
        // if the photo is not black-and-white then print #Color
        if (i.first != 'B' && i.first != 'W' && i.first != 'G')
        {
            cout << "#Color \n";
            return;
        }
    }
    // if the photo is black-and-white then print #Black&White
    cout << "#Black&White \n";
}
```

<hr>

<br><br>

## 2) [Dubstep](https://codeforces.com/contest/208/problem/A)

### Code

```cpp
int main()
{
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        // if substring "WUB" is found then print a space and skip the next two characters
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            if (flag)
                cout << " ";
            i += 2;
        }
        else                             // print the character
            cout << str[i], flag = true; // mark flag to take space if WUB is found in the text not from the front 
    }
}
```