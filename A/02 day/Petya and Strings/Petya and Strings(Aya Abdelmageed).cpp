#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int  main()
{
    string s,t;
    cin >>s>>t;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(65 <= s[i] && s[i] <= 90)
            s[i] =char(s[i]+ 32);
        
        if(65 <= t[i] && t[i] <= 90)
            t[i] =char( t[i] + 32);
    
    }
    
    if(s == t)
        cout<<0<<el;
    else if(s > t)
        cout<<1<<el;
    else
        cout<<-1<<el;
}