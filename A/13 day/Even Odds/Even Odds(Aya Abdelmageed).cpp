#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    //get the midpoint the end index for odd num
    long long mid = ceil((double) n / 2); // to get mid of even or odd num

    if(k > mid) // k for even num
        cout<< (k - mid) * 2 <<el;
    else // k position for odd num
        cout<<(k * 2) - 1<<el;
}