#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T >> n;
    vector<int> X(T), Y(T);
    float dist = 0;
    cin >> X[0] >> Y[0];
    for (int i = 1; i < T; i++)
    {
        cin >> X[i] >> Y[i];
        // get the distance between the current point and the previous point
        dist += sqrt(pow(X[i] - X[i - 1], 2) + pow(Y[i] - Y[i - 1], 2));
    }
    // multiply the distance by the number of minutes per 50 meters
    cout << fixed << setprecision(9) << dist * n / 50 << endl;
    return 0;
}