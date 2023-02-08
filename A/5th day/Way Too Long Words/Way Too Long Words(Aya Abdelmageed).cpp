#include<bits/stdc++.h>
#define el "\n"
using namespace std;

int main()
{
int t;
cin >>t;
string s;
while(t--)
{
    cin >> s;
    if(s.length() <= 10)
        cout<<s<<el;
    else
    {
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<el;
    }

      
}
    return 0;
}