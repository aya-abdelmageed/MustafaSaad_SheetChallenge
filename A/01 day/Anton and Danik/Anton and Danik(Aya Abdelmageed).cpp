#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    cin.tie(0);
    cin.sync_with_stdio;
    int n;
    string s;
    cin >>n>>s;
    int a = 0,d = 0 ;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        a++;
        else
        d++;
    }
    if(a > d)
    cout<<"Anton\n";
    else if(d > a)
    cout<<"Danik\n";
    else
    cout<<"Friendship\n";
}