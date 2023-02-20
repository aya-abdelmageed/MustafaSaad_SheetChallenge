#include <bits/stdc++.h>
using namespace std;

vector<bool> check;
vector<int> Primes;
// seive to find all primes from 2 to 50
void seive()
{
    check.assign(51, true);

    for (int i = 2; i <= 50; i++)
    {
        if (check[i])
        {
            Primes.push_back(i);
            for (int j = i * i; j <= 50; j += i)
            {
                check[j] = false;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    seive(); 
    // upper_bound returns an iterator to the first element that is greater than value
    auto it = upper_bound(Primes.begin(), Primes.end(), n);
    // if the next prime is equal to m then print YES else print NO
    cout << (*it == m ? "YES" : "NO");
}