// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> dq; // declare deqeue
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    int i = 1, sereja = 0, dima = 0;
    while (!dq.empty())
    {
        // get the greatest value of either the leftmost card in a row, or the rightmost one
        if (dq.back() > dq.front())
        {
            if (i % 2)
                sereja += dq.back(); // sereja should play
            else
                dima += dq.back(); // deman should play
            dq.pop_back();
        }
        else
        {
            if (i % 2)
                sereja += dq.front();
            else
                dima += dq.front();
            dq.pop_front();
        }
        i++;
    }
    // output the score of the sereja and dima
    cout << sereja << " " << dima << "\n";
}