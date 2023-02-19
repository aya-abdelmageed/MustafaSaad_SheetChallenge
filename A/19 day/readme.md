# 19th Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Anton and Polyhedrons](http://codeforces.com/contest/785/problem/A)
2. [Panoramix's Prediction](http://codeforces.com/contest/80/problem/A)

<hr>

<br><br>

## 1) [Anton and Polyhedrons](http://codeforces.com/contest/785/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    ll sum = 0;  // sum of faces
    // store the number of faces for each polyhedron
    mp["Tetrahedron"] = 4; 
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    for (int i = 0; i < n; i++)
    {
        string entry;
        cin >> entry; 
        sum += mp[entry]; // add the number of faces for each polyhedron
    }
    cout << sum << "\n";
}
```

<hr>

<br><br>

## 2) [Panoramix's Prediction](http://codeforces.com/contest/80/problem/A)


### Code

```cpp
vector<bool> check;
vector<int> Primes;
// seive to find all primes from 2 to 50
void seive()
{
    check.assign(51, true);

    for (int i = 2; i <= 50; i++)
    {
        if (check[i])
        {
            Primes.push_back(i);
            for (int j = i * i; j <= 50; j += i)
            {
                check[j] = false;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    seive(); 
    // upper_bound returns an iterator to the first element that is greater than value
    auto it = upper_bound(Primes.begin(), Primes.end(), n);
    // if the next prime is equal to m then print YES else print NO
    cout << (*it == m ? "YES" : "NO");
}
```