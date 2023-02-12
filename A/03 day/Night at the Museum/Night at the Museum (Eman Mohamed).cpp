// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    int n = s.size(), res = 0;
    int x = s[0] - 'a', y = 26 - x;
    res += min(x, y);
    for (int i = 0; i < n - 1; i++)
    {
        x = abs(s[i] - s[i + 1]), y = 26 - x;

        res += min(x, y);
    }
    cout << res;
}
// a b c d e f g h i j k l m n o p q r s t u v w x y z