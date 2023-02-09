// author : Eman Elsayed

int main()
{
    string str;
    cin >> str;
    if (sz(str) > 10) // if string length is strictly greater than 10
        cout << str[0] << sz(str) - 2 << str[sz(str) - 1] << endl;
    else // else print the string as it is
        cout << str << endl;

    return 0;
}