#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d; // n = number of oranges , b = max size of orange Juicer , d = max size of waste box
    cin >> n >> b >> d;
    vector<int> vec(n);
    for (auto &i : vec)
        cin >> i;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] <= b) // if the orange size is less than or equal to the max size of orange Juicer it will be juiced
        {
            sum += vec[i]; // sum the size of the orange to the waste box
            if (sum > d)   // if the waste box is full it will be emptied
            {
                sum = 0;
                cnt++; // count the number of times the waste box is emptied
            }
        }
    }
    cout << cnt << endl; // print answer (number of times the waste box is emptied)
    return 0;
}