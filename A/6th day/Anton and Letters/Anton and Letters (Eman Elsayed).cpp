// author : Eman Elsayed

int main()
{
    string s;
    getline(cin, s); // read the whole line and store it in s because there is a space in the input
    set<char> st;    // set to store the unique characters except the spaces and the commas and the curly brackets
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != ',' && s[i] != '{' && s[i] != '}')
            st.insert(s[i]);
    }
    // print the size of the set
    cout << st.size() << endl;
    return 0;
}