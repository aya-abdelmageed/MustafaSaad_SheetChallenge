//              بسم الله الرحمن الرحيم

//author Eman Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n; // git the lenght of the string 
    string s;
    cin>>s; //  git the string 
    int ScorOfAnton = 0 , ScoreOfDanik = 0; // intialize the score of the Anton and Danik
    for(int i = 0 ; i < n ;i++)
    {
        if(s[i] == 'A') ScorOfAnton++; // if the character equal A score of the Anton increase by 1
        else if(s[i] == 'D') ScoreOfDanik++; // if the character equal D score of the Danik increase by 1
    }
    if(ScoreOfDanik == ScorOfAnton) cout<<"Friendship\n"; // if the Anton tie with Danik we should print friendship
    else
    cout<<(ScoreOfDanik > ScorOfAnton ?"Danik":"Anton")<<"\n"; // this is ternary operator which compare two scores and output who wine in the final

}




