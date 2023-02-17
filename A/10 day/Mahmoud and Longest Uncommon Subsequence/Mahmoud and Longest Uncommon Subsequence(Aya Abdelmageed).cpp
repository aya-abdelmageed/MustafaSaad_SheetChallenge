#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    string a,b;
    cin >>a>>b;
    if(a == b) // if the two string a and b are equal then there's no uncommon subsequence
        cout<<-1<<el;
    else // if not equal the the string with the longest size is the length of the longest uncommon subsequence of a and b.
        cout<<max(a.size(), b.size());
}