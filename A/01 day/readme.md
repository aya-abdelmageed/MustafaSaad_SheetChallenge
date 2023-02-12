# First Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Vanya and Fence](https://codeforces.com/contest/677/problem/A)
2. [Anton and Danik](https://codeforces.com/contest/734/problem/A)
3. [Bear and Big Brother](https://codeforces.com/contest/791/problem/A)
4. [Team](https://codeforces.com/contest/231/problem/A)
5. [Beautiful Matrix](https://codeforces.com/contest/263/problem/A)

<hr>

<br><br>

## 1)  [Vaanya and Fence](https://codeforces.com/contest/677/problem/A)

### Code


```cpp

int main()
{
    int n, h, x, ans = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // if height is greater than h then he need to jump so he need 2 width
        if (x > h)
            ans += 2;
        // else he need 1 width
        else
            ans++;
    }
    cout << ans << endl;
    return 0;
}
```

<hr>

<br><br>

## 2)  [Anton and Danik](https://codeforces.com/contest/734/problem/A)

### Code

```cpp

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        // count the number of Anton and Danik
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    // if Anton > Danik print Anton
    if (a > d)
    {
        cout << "Anton";
    }
    // if Danik > Anton print Danik
    else if (a < d)
    {
        cout << "Danik";
    }
    // if Anton = Danik print Friendship
    else
    {
        cout << "Friendship";
    }
    return 0;
}
```

<hr>

<br><br>

## 3)  [Bear and Big Brother](https://codeforces.com/contest/791/problem/A)

### Code

```cpp

int main()
{
    // taking input
    long long int n, m, count = 0;
    cin >> n >> m;
    // counting the number of years
    while (n <= m)
    {
        // increasing the weight of the bear by 3kg and the weight of the brother by 2kg
        n *= 3;
        m *= 2;
        // increasing the number of years by 1 until the weight of the bear is greater than the weight of the brother
        count++;
    }
    // printing the number of years
    cout << count << endl;
}
```

<hr>

<br><br>

## 4)  [Team](https://codeforces.com/contest/231/problem/A)
### Code

```cpp

int main(){
    int n, p, v, t, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> v >> t;
        // if the sum of p, v, t is greater than 1 then the problem will be solved
        if (p + v + t > 1)
        {
            count++;
        }
    }
    // printing the number of problems that will be solved
    cout << count << endl;
    return 0;
}

```

<hr>

<br><br>

## 5)  [Beautiful Matrix](https://codeforces.com/contest/263/problem/A)

### Code

```cpp
int main(){
    int a[5][5], x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            // if the number is 1 then we will save the position of the number
            if (a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    // the number of moves is the absolute value of the difference between the position of the number and the center of the matrix
    cout << abs(x - 2) + abs(y - 2) << endl;
    return 0;
}

