#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int k,r;
    cin>>k>>r;

    int c = 1;
    long long x = k;
    while(x % 10 != 0 && x % 10 != r)
    {
        c++;
        x = c * k;
    }
    cout<<c<<el;
}