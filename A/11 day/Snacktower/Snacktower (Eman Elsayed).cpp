#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i;
    int cnt = n;
    map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        visited[nums[i]] = true;
        while (visited[cnt]) // if the current number is equal to the number of the current level then print it and decrement the number of the current level
        {
            cout << cnt << " ";
            cnt--;
        }
        cout << "\n"; // if the current number is not equal to the number of the current level then print a new line
    }
}