# Second Day of Mustafa Saad sheet Challenge

<br><br>

## Problems:

1. [Gravity Flip](http://codeforces.com/contest/405/problem/A)
2. [Petya and String](http://codeforces.com/contest/112/problem/A)
3. [Boy or Girl](http://codeforces.com/contest/236/problem/A)
4. [Word](http://codeforces.com/contest/59/problem/A)
5. [Magntes](http://codeforces.com/contest/344/problem/A)

<hr>

<br><br>

## 1) [Gravity Flip](http://codeforces.com/contest/405/problem/A)

### Code

```cpp
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort the vector in ascending order
    sort(v.begin(), v.end());
    // output the answer
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
```

<hr>

<br><br>

## 2) [Petya and String](http://codeforces.com/contest/112/problem/A)

### Code

```cpp
int main()
{
     string s , x;
    cin>>s>>x; // get first and second string
    //make string s lower case to compare it by s string
    for(int i = 0 ; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
    //make string x lower case to compare it by x string
    for(int i = 0 ; i < x.size() ; i++)
    {
        x[i] = tolower(x[i]);
    }
    //compare function get the comparasion betweent two string and show if two string are equel , greater than and less than
    cout<<s.compare(x)<<"\n";
}
```

<hr>

<br><br>

## 3) [Boy or Girl](http://codeforces.com/contest/236/problem/A)

### Code

```cpp

int main()
{
    string str;
    cin >> str;
    // create a vector of size 26 and initialize it with 0 to count the number of each letter
    vector<int> v(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        v[str[i] - 'a']++; // count the number of each letter
    }
    int odd = 0; // counter to count number of distinct letters
    for (int i = 0; i < 26; i++)
    {
        // if this letter is exist
        if (v[i] > 0)
        {
            // increment the counter
            odd++;
        }
    }
    // if the number of distinct letters is odd print IGNORE HIM! else print CHAT WITH HER!
    cout << (odd & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
}
```

<hr>

<br><br>

## 4) [Word](http://codeforces.com/contest/59/problem/A)

### Code

```cpp

int main(){
    string s;
    cin >> s;
    int lower = 0, upper = 0; //  to count the number of lower and upper case letters
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){  // check if the letter is lower case function built in c++
            lower++;
        }
        else{  // else it is upper case
            upper++;
        }
    }
    // if the number of lower case letters >= the number of upper case letters
    if(lower >= upper){
        // transform all the letters to lower case
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    else{
        // else transform all the letters to upper case
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }
    // print the string
    cout << s;
}

```

<hr>

<br><br>

## 5) [Magntes](http://codeforces.com/contest/344/problem/A)

### Code

```cpp
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int cnt = 1;
    // count the number of groups of magnets that attract each other
    for (int i = 0;i<n-1;i++){
        // if the current magnet is different from the next magnet
        if(v[i] != v[i+1]){
            // increment the counter
            cnt++;
        }
    }
    // print answer
    cout << cnt;
}
```
