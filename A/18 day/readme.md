# 18th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Theatre Square](http://codeforces.com/contest/1/problem/A)
2. [Calculating Function](http://codeforces.com/contest/486/problem/A)

<hr>

<br><br>

## 1) [Theatre Square](http://codeforces.com/contest/1/problem/A)

### Code

```cpp
int n, m, a;
    cin >> n >> m >> a;
    // cout << (long long)ceil((double)n / a) * ceil((double)m / a) << endl;
    cout << (long long)(n / a + (n % a ? 1 : 0)) * (m / a + (m % a ? 1 : 0)) << endl;
```

<hr>

<br><br>

## 2) [Calculating Function](http://codeforces.com/contest/486/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    // -1 + 2 -3 + 4 -5 + 6 -7 + 8 -9 + 10 So the sum of the first n odd numbers is n^2 and the sum of the first n even numbers is n^2/2
    cout << (n % 2 ? n / 2 - n : n / 2) << endl;
}
```