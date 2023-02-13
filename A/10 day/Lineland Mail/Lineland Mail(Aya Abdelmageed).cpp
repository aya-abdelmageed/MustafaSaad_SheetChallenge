#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n;
    cin >>n;
    long long a[n];
    long long ans[n][2];
    //get the x-coordinate of the i-th city
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //array for put the min and max for each city
    for(int i = 0; i < n; i++)
    {
       //count the min and max cost of sending a letter from the i-th city to some other city
       if(i == 0)
       {
            ans[i][0] = (abs(a[0] - a[1]));
            ans[i][1] = (abs(a[0] - a[n - 1]));
       }
       //for other city
        else
        {
            ans[i][0] = min(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1]));
            ans[i][1] = max(abs(a[i] - a[n - 1]), abs(a[i] - a[0]));
        }
        
    }
    //print ans
    for(int i = 0; i < n; i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<el;
    }
}