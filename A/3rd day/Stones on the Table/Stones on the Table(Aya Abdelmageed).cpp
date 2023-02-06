#include <bits/stdc++.h>
using namespace std;
#define el '\n';

int main()
{
    int n;
    cin >>n;

    string s;
    cin >> s;
    int c = 0;
    for(int i = 1; i < s.size();i++)
    {
        if(s[i] == s[i - 1])
        {
            s.erase(i,1);
            c++;
            i--;
        }
    }
    cout<<c<<el;
}