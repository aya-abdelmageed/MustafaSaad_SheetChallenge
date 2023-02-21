#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n], b[n];

    for(int i = 0; i < n; i++) // get the rating of the i-th participant before and after the round
    {
        cin>>b[i]>>a[i];
        if(b[i] != a[i])
        {
            cout<<"rated\n";
            return 0; //end program
        }
    }
    if(is_sorted(a,a+n,greater<int>())) //To check for a sorted array in descending order or not
    {
        cout<<"maybe"<<el;
    }
    else
        cout<<"unrated"<<el; 

}