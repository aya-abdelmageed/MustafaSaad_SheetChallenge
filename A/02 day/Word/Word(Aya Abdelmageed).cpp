#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
     string s;
    cin >>s;
    string u = "",l = "";
    int su = 0,sl = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(65 <= s[i] && s[i] <= 90)
        {
            su++;
            u +=s[i];
            s[i] =char(s[i]+ 32);
            l += s[i];
        }   
        
        else
        {
            sl++;
            l +=s[i];
            s[i] =char(s[i]- 32);
            u += s[i];
        }  
    }
    if(su > sl)
        cout<<u<<el;
    else
        cout<<l<<el;

}