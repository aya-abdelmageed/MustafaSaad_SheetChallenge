// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec)
        cin >> i;
    long long ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vec[i];           // sum all the elements
        if (sum < 0)             // if the sum is negative then we will add the absolute value of the sum to the answer
            ans -= sum, sum = 0; // and update the sum to 0
    }
    // print the answer
    cout << ans << endl;
}