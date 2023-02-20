#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
   
    char c;
    string t;
    cin >> c >>t;
    
    string ans = "";
    
    for(int i = 0; i < t.size(); i++) // loop the string to get the original one.
    {
        int x = s.find(t[i]); //find index of the char in the string to get the right or left char.
        if(c == 'R')
            ans += s[x - 1];
        else
            ans += s[x + 1];
    }
   cout<<ans<<el;
}

    