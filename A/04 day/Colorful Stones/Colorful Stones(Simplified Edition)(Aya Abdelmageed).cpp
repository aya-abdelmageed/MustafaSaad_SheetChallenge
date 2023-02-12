#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    string s,t;
    cin >>s>>t;
    int x = 0;
    for(auto i : t)
    {
        if(s[x] == t[i])
            x++;
    }
    cout<<x<<el;
}