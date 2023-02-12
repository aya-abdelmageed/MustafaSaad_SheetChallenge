// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec(4); // create a vector of size 4
    for (auto &i : vec)
        cin >> i;
    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];     // get the character from the string and convert it to integer to get the index of the vector
        sum += vec[ch - '1']; // add the value of the vector at the index of the character to the sum
    }
    // print the sum
    cout << sum << "\n";
}