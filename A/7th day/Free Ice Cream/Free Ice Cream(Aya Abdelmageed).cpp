#include<bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int n;
    long long x,d;
    cin >>n>>x;
    char s; //for sign '+' || '-'
    int c = 0; //for count number of kids that left the house in distress.
    while(n--)
    {
        cin>>s>>d; 
        if(s == '+') 
            x += d;
        else
        {
            if(x - d >= 0) // give packs to child
                x = x - d;
            else // kids left the house in distress
                c++;
        }
    }
    cout<<x<<" "<<c<<el;
}