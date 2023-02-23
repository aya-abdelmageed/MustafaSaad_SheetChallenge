#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    long long n;
    cin >>n;
    //   n = 1, 2, 3, 4, 5, 6, 7 ...
    // ans = -1, 1, -2, 2, -3, 3, -4 ...  
    if(n % 2 == 0) //n is even num
        cout<< n / 2 <<el;
    else //ans = -(the next even num / 2)
        cout<< -((n+1) / 2)<<el;
}