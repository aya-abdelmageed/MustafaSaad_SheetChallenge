#include<bits/stdc++.h>
using namespace std;

#define el '\n'
int main()
{
    int n;
    cin>>n;
    long long a[n];
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    sort(a,a+n); // sort array so the minimum is a[0] and maximum is a[n-1]

     for(int i = 1; i < n - 1; i++)
    {
        // check if the number > minimum and the number <  maximum then counter++
    
        if(a[i] > a[0] && a[i] < a[n - 1]) 
            c++;
    }
    cout<<c<<el;

}
