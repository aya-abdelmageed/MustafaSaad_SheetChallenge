#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n;
    cin >>n;
    int h[n],a[n];
    for(int i = 0; i < n; i++)
    {
        cin >>h[i]>>a[i];
    }
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j != i)
            {
                if(h[i] == a[j])
                    c++;
            }
        }
    }
    cout<<c<<el;
}