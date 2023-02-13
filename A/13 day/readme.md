# 9th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Keyboard](https://codeforces.com/contest/474/problem/A)
2. [Even Odds](https://codeforces.com/contest/318/problem/A)

<hr>

<br><br>

## 1) [Keyboard](https://codeforces.com/contest/474/problem/A)

### Code

```cpp

int main()
{
    string word = "qwertyuiopasdfghjkl;zxcvbnm,./"; // store the keyboard
    char ch;
    string str;
    cin >> ch >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int idx = word.find(str[i]); // here we find the index of the character in the keyboard
        if (ch == 'R')               // if the direction is right we will move to the left
            str[i] = word[idx - 1];
        else // if the direction is left we will move to the right
            str[i] = word[idx + 1];
    }
    // print the result
    cout << str << endl;
}
```

<hr>

<br><br>

## 2) [Even Odds](https://codeforces.com/contest/318/problem/A)
### Code

```cpp
int main()
{
   long long n, k;
    cin >> n >> k;
    // 1 3 5 7 2 4 6
    n = ceil(n / 2.0);
    if (k > n) // if k is in the second half then the number will be even
    {
        cout << 2 * (k - n) << "\n";
    }
    else // if k is in the first half then the number will be odd and the number will be 2*k-1
    {
        cout << 2 * (k)-1 << "\n";
    }
}
```
