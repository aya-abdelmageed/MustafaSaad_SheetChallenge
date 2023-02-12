// author "Eman Elsayed"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking input
    long long int n, m, count = 0;
    cin >> n >> m;
    // counting the number of years
    while (n <= m)
    {
        // increasing the weight of the bear by 3kg and the weight of the brother by 2kg
        n *= 3;
        m *= 2;
        // increasing the number of years by 1 until the weight of the bear is greater than the weight of the brother
        count++;
    }
    // printing the number of years
    cout << count << endl;
}