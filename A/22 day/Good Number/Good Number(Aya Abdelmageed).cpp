#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    string num = "0123456789";
    int c = 0;//count good k
    
    int n, k;
    cin>>n>>k;
    while(n--)
    {
         string s;
         cin >> s;
         int numdig = 0; // for count digits exist in the string
        for(int i = 0; i <= k; i++)
        {
            if(s.find(num[i]) != string :: npos) // found this digit 
            {
                numdig++;
            }
            else
            {
                break;
            }
        }
        if(numdig == k + 1 ) //all k digit exist from 0 to k
            c++;
    }
   
   
    cout<<c<<el;
}