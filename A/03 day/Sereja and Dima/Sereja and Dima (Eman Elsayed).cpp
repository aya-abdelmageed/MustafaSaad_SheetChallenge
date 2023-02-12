// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take the number of cards
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // two pointers to the first and last card
    int l = 0, r = n - 1;
    long long sereja = 0, dima = 0, cnt = 0;
    // here we will take the maximum card from the first or the last card and add it to the player who will take it
    while (l <= r)
    {
        if (nums[l] >= nums[r])
        {
            // counter to know who will turn now
            if (cnt % 2 == 0) // if the counter is even sereja will take the card
                sereja += nums[l];
            else // else this is dima turn
                dima += nums[l];
            l++;
        }
        else
        {
            if (cnt % 2 == 0)
                sereja += nums[r];
            else
                dima += nums[r];
            r--;
        }
        cnt++;
    }
    // print the result for sereja and dima
    cout << sereja << " " << dima << endl;
}