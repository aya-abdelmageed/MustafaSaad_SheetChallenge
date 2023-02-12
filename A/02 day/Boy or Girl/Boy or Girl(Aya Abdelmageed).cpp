#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    string s;
    cin>>s;

    map<char,int> m;
    int c = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(m[s[i]] == 0)
        {
            c++;
            m[s[i]] = 1;
        }        
    }
    if(c % 2 == 0)
        cout<<"CHAT WITH HER!"<<el;
    else
        cout<<"IGNORE HIM!"<<el;

}