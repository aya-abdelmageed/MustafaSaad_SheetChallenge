#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    long long l, r;
    cin >>l>>r;
    // we need two even num and one odd number between them and 
    //we need 3 numbers the first one even and two after it

    //suppose the first even num l if even else l+1
    if(l % 2 != 0)
        l += 1;

    //we need two after it check if the range allowed two it
    if(abs(r - l) < 2) 
        cout<<-1<<el;  // there isn't any number between them so its imposible 

    
    else // we need two even num and one odd number between them
    {
            cout<<l <<" "<<l + 1<<" " <<l + 2<<el;
    }
}