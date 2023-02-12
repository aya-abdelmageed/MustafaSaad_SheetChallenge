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
    long long mn = abs(nums[0] - nums[1]), mx = abs(nums[0] - nums[n - 1]); // calculate the distance between first two Lines and max distance between first and last Lines
    cout << mn << " " << mx << "\n";
    for (int i = 1; i < n; i++)
    {
        // here we calculate minimum distance for each Line and alse maximum distance
        cout << min(abs(nums[i] - nums[i + 1]), abs(nums[i] - nums[i - 1])) << " " << max(abs(nums[i] - nums[n - 1]), abs(nums[i] - nums[0])) << "\n";
    }
}