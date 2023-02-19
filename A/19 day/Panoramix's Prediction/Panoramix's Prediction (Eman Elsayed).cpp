#include <bits/stdc++.h>
using namespace std;

vector<bool> check;
vector<int> Primes;
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
    auto it = upper_bound(Primes.begin(), Primes.end(), n);
    cout << (*it == m ? "YES" : "NO");
}