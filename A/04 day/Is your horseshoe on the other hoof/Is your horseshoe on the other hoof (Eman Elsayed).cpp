// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end()); // sort the vector to make the same horseshoes together
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans++;
        }
    }
    cout << ans;
}