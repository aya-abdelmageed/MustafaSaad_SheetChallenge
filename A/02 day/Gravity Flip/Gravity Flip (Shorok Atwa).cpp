// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // intialize vector -> same as array
    vector<int> arr(n);
    // take input
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // sort array using sort method in c++
    // this method using vector arr.begin(),arr.end()
    sort(arr.begin(), arr.end());
    // print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
