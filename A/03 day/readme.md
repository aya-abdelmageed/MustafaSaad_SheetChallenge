# Third Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Sereja and Dima](https://codeforces.com/contest/381/problem/A)
2. [Stones on the Table](https://codeforces.com/contest/266/problem/A)
3. [Police Recruits](https://codeforces.com/contest/427/problem/A)
4. [Black Square](https://codeforces.com/contest/431/problem/A)
5. [Night at the Museum](https://codeforces.com/contest/731/problem/A)

<hr>

<br><br>

## 1) [Sereja and Dima](https://codeforces.com/contest/381/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    deque<int> dq; // declare deqeue
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    int i = 1, sereja = 0, dima = 0;
    while (!dq.empty())
    {
        // get the greatest value of either the leftmost card in a row, or the rightmost one
        if (dq.back() > dq.front())
        {
            if (i % 2)
                sereja += dq.back(); // sereja should play
            else
                dima += dq.back(); // deman should play
            dq.pop_back();
        }
        else
        {
            if (i % 2)
                sereja += dq.front();
            else
                dima += dq.front();
            dq.pop_front();
        }
        i++;
    }
    // output the score of the sereja and dima
    cout << sereja << " " << dima << "\n";
}
```

<hr>

<br><br>

## 2) [Stones on the Table](https://codeforces.com/contest/266/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n; // get the length of the string
    string s; // get the string
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++; // if the two neighbooring character are the same we should increase the count by 1;
    }
    cout << count << "\n"; // output the count
}
```

<hr>

<br><br>

## 3) [Police Recruits](https://codeforces.com/contest/427/problem/A)

### Code

```cpp

int main()
{
   int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec)
        cin >> i;
    long long ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vec[i];           // sum all the elements
        if (sum < 0)             // if the sum is negative then we will add the absolute value of the sum to the answer
            ans -= sum, sum = 0; // and update the sum to 0
    }
    // print the answer
    cout << ans << endl;
}
```

<hr>

<br><br>

## 4) [Black Square](https://codeforces.com/contest/431/problem/A)

### Code

```cpp

int main()
{
    vector<int> vec(4); // create a vector of size 4
    for (auto &i : vec)
        cin >> i;
    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];     // get the character from the string and convert it to integer to get the index of the vector
        sum += vec[ch - '1']; // add the value of the vector at the index of the character to the sum
    }
    // print the sum
    cout << sum << "\n";
}
```

<hr>

<br><br>

## 5) [Night at the Museum](https://codeforces.com/contest/731/problem/A)

### Code

```cpp
int main()
{

    string str;
    cin >> str;
    // the answer is the minimum between the distance between the first letter and 'a' and 26 - the distance between the first letter and 'a'
    int ans = min(abs(str[0] - 'a'), 26 - abs(str[0] - 'a'));
    // loop on the string and compare each two adjacent letters and add the minimum between the distance between them and 26 - the distance between them to the answer
    for (int i = 0; i < str.size() - 1; i++)
    {
        ans += min(abs(str[i] - str[i + 1]), 26 - abs(str[i] - str[i + 1]));
    }
    // print the answer
    cout << ans << endl;
}
```
