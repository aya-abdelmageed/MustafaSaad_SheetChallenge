#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    int n, m;
    cin >>n >>m;

    bool BW = true;//flag for Black and White photo
    char a[n][m]; //array for bixels
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>> a[i][j];
            if(a[i][j] == 'C' || a[i][j] == 'Y' || a[i][j] == 'M')
                BW = false; //colored photo
        }
    }
    if(BW)
        cout<<"#Black&White\n";
    else
        cout<<"#Color\n";

}