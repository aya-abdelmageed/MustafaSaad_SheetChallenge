#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
   int n,k;
   cin >>n>>k;
   int x[n],y[n];//array for the coordinates
   
   for(int i = 0; i < n; i++)
   {
       cin>>x[i]>>y[i];
       
   }   
   double ans = 0.0;
   
   for(int i = 1; i < n; i++)
   {
       //using the distance between two points formula
       ans += sqrt((x[i] - x[i -1]) * (x[i] - x[i -1]) + (y[i] - y[i-1]) * (y[i] - y[i-1]));
   }
   //for k papers
   ans = ans * k;
   cout<<fixed <<setprecision(9)<<ans / 50<<el;
}