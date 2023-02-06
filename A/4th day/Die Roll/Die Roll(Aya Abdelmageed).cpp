#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int y , w;
    cin >>y>>w;
    int x = max(y,w);
    
    int a = 0,b = 6;
    while(x <= 6)
    {
        a++;
        x++;
    }
    if(b % a == 0)
    {
        b =  b / a;
        a = 1;
    }
    else 
    {
        if(a != 1)
    {
        int i = 2;
   while(b % i != 0 || a % i != 0)
    {
       i++;
       if(i == 6)
        break;
    }
    if(b % i == 0 && a % i == 0)
    {   
        b = b / i;
        a = a / i;
    }
    
    }
    }
    cout<<a<<"/"<<b<<el;
}