// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int ans = 1; // the minimum number of shovels that Egor can buy
    for (int i = 1; i <= 10; i++)
    {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r) // if the last digit of the price of the shovel is 0 or r so there is no need to buy another shovel
        {
            ans = i; // the number of shovels that Egor can buy
            break;
        }
    }
    cout << ans; // print the number of shovels that Egor can buy
}