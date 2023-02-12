// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; // get the string
    int n = s.size(), lowerCount = 0, upperCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (islower(s[i])) // know the number of the lower case letter
            lowerCount++;
        else
            upperCount++; // know the number of the upper case letter
    }
    // if the number of lower case letter greater than or equal to upper case letter convert all the letter to lower case
    if (lowerCount >= upperCount)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    // if the number of upper case letter greater than to lower case letter convert all the letter to upper case

    else
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    // print the string
    cout << s << "\n";
}