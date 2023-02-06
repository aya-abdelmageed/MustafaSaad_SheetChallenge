#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >>a[i];

    }
    int s = 0, d = 0;
    int i = 0, j = n - 1; 
    bool flag = 1;
    while(i < j)
    {
        if(flag)
        {
            if(a[i] > a[j])
            {
                s += a[i];
                i++;            
            }
            else
            {
                s += a[j];
                j--;
            }
            flag = 0;
        }
        else
        {
            if(a[i] > a[j])
            {
                d += a[i];
                i++;            
            }
            else
            {
                d += a[j];
                j--;
            }
            flag = 1;
        }
    }
    if(flag)
    {
        s += a[i];
    }
    else
        d += a[i];
    cout<<s<<" "<<d<<el;
}