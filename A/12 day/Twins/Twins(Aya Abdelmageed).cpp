#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];

// get the sum of array element
int sum = 0;
    for(int i  = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    int c = 0; // counter for count coins
    //to get large sum of coins with minimum number of coins 
    // sort array
    int x = 0; // sum of coins
    sort(a,a+n);
    for(int i = n - 1 ; i >= 0; i--)
    {
        if(x > sum / 2) //to make sure the sum of coins > sum of the rest coins 
            break;
        x += a[i]; //add this coin to the sum of coins
        c++; //increment the counter
    }

    cout<<c<<el;
}