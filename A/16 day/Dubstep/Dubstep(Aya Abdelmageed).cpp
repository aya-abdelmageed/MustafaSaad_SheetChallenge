#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i = 0;
    while( i < s.length() - 1)
    {
        if(s.substr(i,3) == "WUB") //check if the substring = "WUB" then either erase or replace with space
        {
            if(i == 0)
            {
                s.erase(i,3);
                i = 0; //after erase this substring we still in index 0 so we check it again
                continue;
            }
            else
            {
                s.replace(i,3," "); //replace with space
            }
        }
        i++;
    }
    cout<<s<<el;
}