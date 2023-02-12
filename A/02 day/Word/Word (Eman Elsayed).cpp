// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int lower = 0, upper = 0; //  to count the number of lower and upper case letters
    for(int i = 0; i < s.size(); i++){ 
        if(islower(s[i])){  // check if the letter is lower case function built in c++
            lower++;
        }
        else{  // else it is upper case
            upper++;
        }
    }
    // if the number of lower case letters >= the number of upper case letters
    if(lower >= upper){
        // transform all the letters to lower case
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    else{
        // else transform all the letters to upper case
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }
    // print the string
    cout << s; 
}