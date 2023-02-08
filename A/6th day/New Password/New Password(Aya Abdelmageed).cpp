#include<bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int n, k;
    cin >>n>>k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string t = s.substr(0,k);
    int j = 0; //counter for string t of k distinct char
    string p = ""; // new password;
    for(int i = 0; i < n; i++)
    {
        if(j < k)
        {
            p += t[j];
            j++;
        }
        else
        {
            j = 0;
            p += t[j];
            j++;
        }
    }
    cout<<p<<el;
}