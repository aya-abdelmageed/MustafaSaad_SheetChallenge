#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n, b, d;
    cin >>n >>b >>d;

    long long a, j = 0, c = 0; // a for orange size,
                              // j for total size of squeezes oranges
                              // c for count How many times will he have to empty the waste section? 

    while(n--)
    {
        cin >>a;
        if(a <= b)
            j += a;
        if(j > d)
            c++, j = 0;
    }
    cout<<c<<el;
    

}