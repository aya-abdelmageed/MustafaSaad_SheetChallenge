
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i, sum += i;                         // sum all the coins
    sort(nums.begin(), nums.end(), greater<int>()); // sort the array in descending order
    int sortedSum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (sortedSum > sum / 2) // if the sum of the coins that we have taken is greater than the sum of the rest of the coins then we have taken the minimum number of coins
            break;
        sortedSum += nums[i]; // add the current coin to the sum of the coins that we have taken
        cnt++;                // increment the number of coins that we have taken
    }
    // print the minimum number of coins that we have taken
    cout << cnt << endl;
}