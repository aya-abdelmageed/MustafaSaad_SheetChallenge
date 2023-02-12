// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> gifts(n);
    int ai;
    for (int i = 0; i < n; i++)
    {
        cin >> ai;
        gifts[ai - 1] = i + 1; // remember that the gifts are numbered from 1 to n
    }
    for (int i = 0; i < n; i++)
        cout << gifts[i] << " "; // print the gifts
}