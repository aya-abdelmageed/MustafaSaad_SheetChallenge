#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n,a;
    cin >> n; 
    int  snack[n+1];
    for(int i =1;i <=n;i++)
    {
        cin>>a; 
        snack[i]=a; 
    }
bool exist[100001] {}; 
int c=n;
for(int i =1;i<=n; i++)
{
    exist[snack[i]]=true;

    while( exist[c]== true && c > 0)
    {
        cout << c-- <<" ";
    }
    cout<< " \n"; 
}
}