#include <bits/stdc++.h>
#define el '\n'
using namespace std;
# define PI  3.14159265358979323846  /* pi */
int main()
{
   int d, h ,v ,e;
   cin >>d>>h>>v>>e;
   
   double sa = (d / 2.0)* (d / 2.0) * PI; //get the surface area the upper one of the two bases
   double t = v / sa; // get the time of end all the water of the cub
   
        if (t <= e) // t < or equal the the time water level increases (e)
            cout << "NO"<<el;
        else
            cout << "YES"<<el
                 << fixed << setprecision(12) << h / (t-e)<<el; // time in seconds needed the cup will be empty
    
}