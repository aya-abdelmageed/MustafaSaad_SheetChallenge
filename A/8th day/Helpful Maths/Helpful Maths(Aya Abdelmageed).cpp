#include<bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    string s;
    cin >>s;
    vector<int>v; // for number in the string s;
    for(int i = 0; i < s.size(); i+=2)
    {
        v.push_back(s[i]); //add number to vector v;
    }
    sort(v.begin(), v.end()); //sort number
    int j = 0;
    for(int i = 0; i < s.size(); i+=2)
    {
        s[i] = v[j]; //return the sorted number to the string
        j++;
    }
    cout<<s<<el;
}