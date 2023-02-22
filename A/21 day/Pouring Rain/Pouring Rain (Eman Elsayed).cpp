#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    int d, h, v, e;
    cin >> d >> h >> v >> e;
    double r = d / 2.0;    // get radius
    double s = PI * r * r; // get area
    double t = v / s;      // get time
    if (t <= e)            // if time is less than or equal to evaporation time
        cout << "NO" << endl;
    else // time in seconds needed the cup will be empty
        cout << "YES\n"
             << fixed << setprecision(10) << h / (t - e) << endl;
}