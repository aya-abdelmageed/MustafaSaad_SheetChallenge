#include<bits/stdc++.h>
using namespace std;

#define el '\n'
int main()
{
    int n;
    cin >>n;
    // map for levels can be passed
    map <int,bool> m;
    int p; //num of x levels
    int q; // num of y levels
    int x; // level
    int c = 0; // for count the level can be passed
    cin >> p;
    while(p--) // get x levels;
    {
        cin>>x;
        if(!m[x]) // this level not visited yet (new level then increase counter)
        {
            m[x] = true; // mark this level as visited 
            c++;
        }
    }
    cin >>q; //get number of y levels
    while(q--) // get x levels;
    {
        cin>>x;
        if(!m[x]) // this level not visited yet (new level then increase counter)
        {
            m[x] = true; // mark this level as visited 
            c++;
        }
    }
    if(c == n) //all level have passed
        cout<< "I become the guy."<<el;
    else
        cout<<"Oh, my keyboard!"<<el;

}