
# Fourth Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Games](https://codeforces.com/contest/268/problem/A)
2. [Buy a Shovel](https://codeforces.com/contest/732/problem/A)
3. [Colorful Stones](https://codeforces.com/contest/265/problem/A)
4. [Is your horseshoe on the other hoof](https://codeforces.com/contest/228/problem/A)
5. [Die Roll](https://codeforces.com/contest/9/problem/A)

<hr>

<br><br>

## 1) [Games](https://codeforces.com/contest/268/problem/A)

### Code

```cpp
int main(){
    int n;
    cin >> n;
    vector<int> teams_home_color(n), teams_guest_color(n);
    for(int i = 0; i < n; i++){
        cin >> teams_home_color[i] >> teams_guest_color[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(teams_home_color[i] == teams_guest_color[j]){ // if the home color of team i is equal to the guest color of team j
                ans++;  // so the team i can play with the team j
            }
        }
    }
    cout << ans; // print the number of games
    return 0;
}
```

<hr>

<br><br>

## 2) [Buy a Shovel](https://codeforces.com/contest/732/problem/A)

### Code

```cpp
int main()
{
    int k, r, ans = 1, total;
    // take an input
	cin >> k >> r;
	// brute force using loop
	while (ans) {
		total = ans * k;
		// loop will terminite if any condition is true
		if (total % 10 == 0 ||total % 10 == r)
			break;
		ans++;
	}
	// print the answer
	cout << ans;
    return 0;
}
```

<hr>

<br><br>

## 3)  [Colorful Stones](https://codeforces.com/contest/265/problem/A)

### Code

```cpp
int main()
{
    string s1, s2;
    // take input
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < s2.length(); i++)
    {
    // if the element in first string equal element in second string , count will increase
        if (s1[cnt] == s2[i])
            ++cnt;
    }
    // Print the counter in 1-based position
    cout << ++cnt;
    return 0;
}
```

<hr>

<br><br>

## 4) [Is your horseshoe on the other hoof](https://codeforces.com/contest/228/problem/A)

### Code

```cpp
int main()
{
    vector<int> v(4);
    set<int> st;
    // loop to take array input
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
	// insert array element in vector -> set elements has to be unique 
        st.insert(v[i]);
    }
    // print the minimum number of horseshoes Valera needs to buy
    cout << 4 - st.size();
    return 0;
}
```

<hr>

<br><br>

## 5) [Die Roll](https://codeforces.com/contest/9/problem/A)

### Code

```cpp
int main()
{
    int a, b;
    // take input
    cin >> a >> b;
    // string contain Probabilities
    string p[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    // take max number
    int ans = max(a, b);
    // print the answer from string p that contain probability
    cout << p[6 - ans];
    return 0;
}
```
