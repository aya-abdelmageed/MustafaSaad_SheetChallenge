#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n;
    cin >>n;
    int a;
    map<int,int>m;
    for(int i = 1; i <= n; i++)
    {
        cin >>a;
        m[a] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<el;
}