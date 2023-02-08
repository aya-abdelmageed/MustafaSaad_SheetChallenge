// author : Eman Elsayed

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;                   // read the input
    long long time1 = ceil((double)n / k) * t; // calculate the time to cook all the cakes in the first oven
    long long time2 = d;                       // time of building the second oven
    long long cakes = n - k;                   // remaining cakes needed to be cooked in minimum time
    // while two oven work simultaneously
    while (cakes < n)
    {
        time2 += t; // calculate the time if we use the second oven
        cakes += 2 * k;
    }
    // if i don't need to use the second oven
    if (time1 <= time2)
        cout << "NO" << endl;
    else // if i need to use the second oven
        cout << "YES" << endl;

    return 0;
}