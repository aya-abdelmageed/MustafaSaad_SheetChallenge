#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
    vector<int> v {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47}; // vector of the first 50 prime numbers

    int n, m;
    cin >>n>>m;
    auto it = find(v.begin(),v.end(),n); //find the index of the prime num n at the vector
   
        
    if(v[(it-v.begin()) + 1] == m) //if the num at the next index in the vector = m then yes else no
            cout<<"YES\n";
    
    else
        cout<<"NO\n";
}