// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_A = 0, cnt_D = 0;
    // for loop to count 'A' and 'D' in String
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            cnt_A++;
        else
            cnt_D++;
    }
    // if the number of repetitions of the 'A' is greater than 'D' -> Anton Will win
    if (cnt_A > cnt_D)
        cout << "Anton";

    // else if the number of repetitions of the 'D' is greater than 'A' -> Danik Will win
    else if (cnt_A < cnt_D)
        cout << "Danik";

    // else if the number of repetitions of the 'D' is equal 'A'
    else
        cout << "Friendship";

    return 0;
}