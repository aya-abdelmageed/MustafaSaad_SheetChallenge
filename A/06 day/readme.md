
# Sixth Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Carrot Cakes](https://codeforces.com/contest/799/problem/A)
2. [Anton and Letters](https://codeforces.com/contest/443/problem/A)

<hr>

<br><br>

## 1) [Carrot Cakes](https://codeforces.com/contest/799/problem/A)

### Code

```cpp

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;                   // read the input
    long long time1 = ceil((double)n / k) * t; // calculate the time to cook all the cakes in the first oven
    long long time2 = d;                       // time of building the second oven
    long long cakes = n - k;                   // remaining cakes needed to be cooked in minimum time
    // while two oven work simultaneously
    while (cakes < n)
    {
        time2 += t; // calculate the time if we use the second oven
        cakes += 2 * k;
    }
    // if i don't need to use the second oven
    if (time1 <= time2)
        cout << "NO" << endl;
    else // if i need to use the second oven
        cout << "YES" << endl;

    return 0;
}
```

<hr>

<br><br>

## 2) [Anton and Letters](https://codeforces.com/contest/443/problem/A)

### Code

```cpp
int main()
{
    string s;
    getline(cin, s); // read the whole line and store it in s because there is a space in the input
    set<char> st;    // set to store the unique characters except the spaces and the commas and the curly brackets
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != ',' && s[i] != '{' && s[i] != '}')
            st.insert(s[i]);
    }
    // print the size of the set
    cout << st.size() << endl;
    return 0;
}
```
