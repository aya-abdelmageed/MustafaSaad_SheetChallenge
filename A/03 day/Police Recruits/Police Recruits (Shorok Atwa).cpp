// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, cnt = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] < 0)
            cnt++;
        else
            sum += arr[i];
    }
    cout << cnt;

    return 0;
}