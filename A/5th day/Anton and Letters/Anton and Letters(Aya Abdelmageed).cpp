#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    map<char,int>m;
    string s;
    getline(cin,s);
    int c = 0;
    for(int i = 1; i < s.size() - 1; i+=2)
    {
        if(m[s[i]] == 0)
        {
            m[s[i]] = 1;
            c++;
        }
    }
    cout<<c<<el;
}