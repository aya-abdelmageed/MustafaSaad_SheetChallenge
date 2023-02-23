#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int n;
    cin >>n;
    char a[n][n];
    char x, val;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i == 0 && j == 0)
                x = a[i][j];
            if(i == 0 && j == 1)
                val = a[i][j];
        }
    }
    if(x == val) //check that there are not the same char 
    {
        cout<<"NO\n";
        return 0;
    }
    

    bool t1 = true, t2 = true;
    //loop the array and test the chars
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j || j == n - i - 1) // check  both diagonals 
            {
                if(a[i][j] != x)
                {
                    t1 = false;
                    break;
                }   
            }
            else //check all other squares of the paper
            {
                if(a[i][j] != val)
                {
                    t2 = false;
                    break;
                }
            }
        }
    }
    if(t1 && t2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}