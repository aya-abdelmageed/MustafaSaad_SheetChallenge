//              بسم الله الرحمن الرحيم

//author Eman Mohamed
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<int>grid;
    for(int i = 0 ; i < n; i++)
    {
        if(s[i]!='+')
        {
            int x = s[i] -'0';
            grid.push_back(x);
        } 
    }
    sort(grid.begin() , grid.end());
    cout<<grid[0];
    for(int i = 1 ; i < grid.size() ; i++)
    {
        cout<<'+'<<grid[i];
    }
}