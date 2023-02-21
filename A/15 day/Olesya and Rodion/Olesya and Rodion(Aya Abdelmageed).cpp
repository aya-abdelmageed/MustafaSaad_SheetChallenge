#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int n, t;
    cin >>n >>t;
    // if n = 1 and t = 10 then there is no num
    if(n == 1 && t == 10)
        cout<<-1<<el;

    //if t == 10 then the ans will be the t and n-2 of zeros
    //else then the ans will be the t and n-1 of zeros
    else
    {
        cout<<t;
        if(t == 10)
        {
            for(int i = 0; i < n-2; i++)
                cout<<0;
        }
        else{
            for(int i = 0; i < n-1; i++)
                cout<<0;
        }
    }
    cout<<el;
}
    