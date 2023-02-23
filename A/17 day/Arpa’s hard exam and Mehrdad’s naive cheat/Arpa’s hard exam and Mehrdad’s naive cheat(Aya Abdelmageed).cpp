#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    long long n;
    cin>>n;
    //the final digit of 8^1 = 8, 8^2 = 4, 8^3 = 2, 8^4 = 6, 8^5 = 8,...
    //seq = {8, 4, 2, 6} => 4 numbers
    
    if(n == 0) //any num^0 = 1
        cout<<1<<el;
    else
    {
        //add seq to array
        int seq[] = {8,4,2,6};
        
        n = (n - 1) % 4; //to get the index of the ans

        cout<<seq[n]<<el;
    }

}