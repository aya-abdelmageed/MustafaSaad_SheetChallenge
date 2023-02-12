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
        cin >> a[i];
    }
    int h = 0; //numbers of hired
    int c = 0;//numbers of crimes;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
           h += a[i];
            
        else
        {
            if(h > 0)
            {
                h--;
            }
            else
                c++;
        }
    }
    cout<<c<<el;
}