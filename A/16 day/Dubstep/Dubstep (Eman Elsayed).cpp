#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        // if substring "WUB" is found then print a space and skip the next two characters
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            if (flag)
                cout << " ";
            i += 2;
        }
        else                             // print the character
            cout << str[i], flag = true; // mark flag to take space if WUB is found in the text not from the front
    }
}