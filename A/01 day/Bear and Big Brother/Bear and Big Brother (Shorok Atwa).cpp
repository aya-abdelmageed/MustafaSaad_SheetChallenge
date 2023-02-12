// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int limak, Bob;
    cin >> limak >> Bob;
    int cnt = 0;
    // loop will terminite when limak will be greater than Bob
    while (limak <= Bob)
    {
        limak *= 3;
        Bob *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}