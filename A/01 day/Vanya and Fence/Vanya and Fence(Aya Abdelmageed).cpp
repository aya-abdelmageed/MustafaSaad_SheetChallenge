#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    cin.tie(0);
    cin.sync_with_stdio;
    int n, h;
    cin >>n>>h;
    int sum = 0; 
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >>a;
        if(a > h)
            sum += 2;
        else
            sum += 1;
    }
    cout<<sum<<endl;
}