#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    long long a[4];
    cin >>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    int c = 0;
    for(int i = 1; i < 4; i++)
    {
        if(a[i] == a[i-1])
            c++;
    }
    cout<<c<<el;
}