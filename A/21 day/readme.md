# 21th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Fancy Fence](http://codeforces.com/contest/270/problem/A)
2. [Pouring Rain](http://codeforces.com/contest/667/problem/A)

<hr>

<br><br>

## 1) [Fancy Fence](http://codeforces.com/contest/270/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    // regular polygon has 360 degree and each angle is 180 - n
    cout << (360 % (180 - n) == 0 ? "YES" : "NO") << endl;
}
```

<hr>

<br><br>

## 2) [Pouring Rain](http://codeforces.com/contest/667/problem/A)



### Code

```cpp
int main()
{
    int d, h, v, e;
    cin >> d >> h >> v >> e;
    double r = d / 2.0;    // get radius
    double s = PI * r * r; // get area
    double t = v / s;      // get time
    if (t <= e)            // if time is less than or equal to evaporation time
        cout << "NO" << endl;
    else // time in seconds needed the cup will be empty
        cout << "YES\n" << fixed << setprecision(10) << h / (t - e) << endl;
}
```