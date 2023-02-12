// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s , x;
    cin>>s>>x; // get first and second string
    //make string s lower case to compare it by s string
    for(int i = 0 ; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
    //make string x lower case to compare it by x string
    for(int i = 0 ; i < x.size() ; i++)
    {
        x[i] = tolower(x[i]);
    }
    //compare function get the comparasion betweent two string and show if two string are equel , greater than and less than
    cout<<s.compare(x)<<"\n";
}