#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n;
    cin >>n;
    int a[n]; //arrayvfor a(i-th) number of birds on each n lines ; 
    for(int i = 1; i <= n; i++) // start array from 1;
    {
        cin >>a[i];
    }
    int m;
    cin >>m;//cases
    int x,y; //x for i-th line v[x] i from 1;
    while(m--)
    {
        cin >>x>>y;
        if( x-1 > 0) // to be sure  there exists  upper wire 
        {
            a[x-1] += (y - 1); // add all of birds at the left of dead bird on index y-th 
        } 
        if(x + 1 <= n) // to be sure  there exists  lower wire 
        {
            a[x + 1] += a[x] - y; // add all of birds at the right of dead bird on index y-th
                                 // = number of bird at this x line - (the dead and the all left birds == index y)
        }
        a[x] = 0; // al right this x- th line now has zero bird
    }
    for(int i = 1 ; i <= n; i++)
    {
        cout<<a[i]<<el;
    }

}