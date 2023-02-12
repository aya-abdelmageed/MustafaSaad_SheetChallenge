#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    string s;
    cin >>s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
       
        if(i == 0)
        {
          
            if(s[i] != 'a')
            {
                if((26 - abs(97 - s[i])) < abs(97 - s[i]))
                sum = sum + (26 - abs(97 - s[i]));
                else
                sum = sum + abs(97 - s[i]);
                   
                
            }
        }
        else
        {
            if((26 - abs(s[i] - s[i-1])) < abs(s[i] - s[i-1]))
                sum = sum + (26 - abs(s[i] - s[i-1]));
            else
                sum = sum + abs(s[i] - s[i-1]);
          
        }
    }
    cout<<sum<<el;
}