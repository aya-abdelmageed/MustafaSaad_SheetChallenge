#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int n;
    cin >>n;
    //map the team with their score
    map <string,int> m;
    
    while(n--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int max = 0;
    string x = ""; 
    for(auto i : m) // loop the map for largest score 
    {
        if(i.second > max)
        {
            max = i.second;
            x = i.first;
        }
    }
    cout<<x<<el;
    
}
