# 20th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Counterexample](http://codeforces.com/contest/483/problem/A)
2. [Wasted Time](http://codeforces.com/contest/127/problem/A)

<hr>

<br><br>

## 1) [Counterexample](http://codeforces.com/contest/483/problem/A)

### Code

```cpp
int main()
{
    long long n, m;
    cin >> n >> m;
    n += n & 1;    // to make n even because at least 2 even numbers are needed
    if (m - n < 2) // if interval is less than 2 then there is no solution
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << n << " " << n + 1 << " " << n + 2 << "\n";
    }
    return 0;
}
```

<hr>

<br><br>

## 2) [Wasted Time](http://codeforces.com/contest/127/problem/A)



### Code

```cpp
int main()
{
    int T, n;
    cin >> T >> n;
    vector<int> X(T), Y(T);
    float dist = 0;
    cin >> X[0] >> Y[0];
    for (int i = 1; i < T; i++)
    {
        cin >> X[i] >> Y[i];
        // get the distance between the current point and the previous point
        dist += sqrt(pow(X[i] - X[i - 1], 2) + pow(Y[i] - Y[i - 1], 2));
    }
    // multiply the distance by the number of minutes per 50 meters
    cout << fixed << setprecision(9) << dist * (n / 50) << endl;
    return 0;
}
```