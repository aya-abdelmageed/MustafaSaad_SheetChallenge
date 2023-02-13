#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word = "qwertyuiopasdfghjkl;zxcvbnm,./"; // store the keyboard
    char ch;
    string str;
    cin >> ch >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int idx = word.find(str[i]); // here we find the index of the character in the keyboard
        if (ch == 'R')               // if the direction is right we will move to the left
            str[i] = word[idx - 1];
        else // if the direction is left we will move to the right
            str[i] = word[idx + 1];
    }
    // print the result
    cout << str << endl;
}