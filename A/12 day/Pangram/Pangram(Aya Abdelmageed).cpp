#include<bits/stdc++.h>
using namespace std;

#define el '\n'
int main()
{
    
    int n;
    cin>>n;
    string s;
    cin >>s;
    
    map<char,int> m; // map for check char visited or not
    
   if(n < 26) // length < number of all the characters of the alphabet 
    cout<<"NO\n"; 
    else
    {
        int c  = 0;
        for(int i = 0; i < n; i++)
        {
            if(isupper(s[i])) // make the string only lowercase char
               s[i] = s[i] + 32;
            
            if(!m[s[i]]) // not access this char yet
            {
                m[s[i]] = 1; 
                c++;   // counter for count the characters of the alphabet in the string
            }
        }
        if(c == 26)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    

}