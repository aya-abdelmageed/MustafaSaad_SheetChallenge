#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i;
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] > nums[0] && nums[i] < nums[n - 1]) // if the current number is greater than the minimum number and less than the maximum number then it is not the minimum or the maximum number
            ans++;
    }
    // print the result
    cout << ans << endl;
}