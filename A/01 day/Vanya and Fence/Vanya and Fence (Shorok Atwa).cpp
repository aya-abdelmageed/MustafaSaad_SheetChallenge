// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int FriendsNum, FenceHeight, height, sum = 0;
    cin >> FriendsNum >> FenceHeight;
    // take friends height to check if smaller than or equal to fence height
    while (FriendsNum--)
    {
        cin >> height;
        //  check if friends height smaller than or equal to fence
        if (height <= FenceHeight)
            // width equal 1
            sum += 1;
        //  check if friends height greater than to fence
        else
            // width equal 2
            sum += 2;
    }
    // print the minimum width
    cout << sum;
    return 0;
}
