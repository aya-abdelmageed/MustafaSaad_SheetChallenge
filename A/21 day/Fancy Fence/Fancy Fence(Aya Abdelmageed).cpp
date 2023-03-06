#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int t, a;
    cin >> t;

    while(t--)
    {
        cin >>a;
        
        float n = 360.0 / (180 - a);// n denotes the number of sides of polygons possible
        
        if (n == (int)n) // n is integer num 
            cout << "YES"<<el;
        else
            cout << "NO"<<el;
    }
}