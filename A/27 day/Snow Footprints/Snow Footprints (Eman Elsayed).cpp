#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first, last;
    if (s.find('R') == string::npos)
    {
        last = s.find('L') - 1;
        first = s.find_last_of('L');
    }
    else
    {
        first = s.find('R');
        last = s.find_last_of('R');
        if (s.find_last_of('L') == string::npos)
            last++;
    }
    cout << first + 1 << ' ' << last + 1;
}