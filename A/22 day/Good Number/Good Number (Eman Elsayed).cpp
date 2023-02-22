#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    string str;
    while (n--)
    {
        cin >> str;
        bool flag = true;
        for (int i = 0; i <= k; i++)
        {
            // check if the number i is in the string
            if (str.find(i + '0') == string::npos)
            {
                flag = false;
                break;
            }
        }
        cnt += flag;
    }
    cout << cnt << endl;
}