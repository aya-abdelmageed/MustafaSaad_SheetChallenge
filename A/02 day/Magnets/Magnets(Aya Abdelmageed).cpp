#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n;
    cin >>n;
    int a[n];
    int c = 1;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i > 0)
        {
            if(a[i] != a[i-1])
            {
                c++;
            }

        }
    }
    cout<<c<<el;
}