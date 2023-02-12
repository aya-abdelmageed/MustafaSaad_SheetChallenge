// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (auto &i : nums)
        cin >> i;
    long long mn = abs(nums[0] - nums[1]), mx = abs(nums[0] - nums[n - 1]); // calculate the min and max for the first element
    cout << mn << " " << mx << "\n";
    for (int i = 1; i < n; i++)
    {
        // calculate the min and max for the current element
        cout << min(abs(nums[i] - nums[i + 1]), abs(nums[i] - nums[i - 1])) << " " << max(abs(nums[i] - nums[n - 1]), abs(nums[i] - nums[0])) << "\n";
    }
}