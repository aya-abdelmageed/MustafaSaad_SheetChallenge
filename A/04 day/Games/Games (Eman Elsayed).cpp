// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> teams_home_color(n), teams_guest_color(n);
    for (int i = 0; i < n; i++)
    {
        cin >> teams_home_color[i] >> teams_guest_color[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (teams_home_color[i] == teams_guest_color[j])
            {          // if the home color of team i is equal to the guest color of team j
                ans++; // so the team i can play with the team j
            }
        }
    }
    cout << ans; // print the number of games
    return 0;
}