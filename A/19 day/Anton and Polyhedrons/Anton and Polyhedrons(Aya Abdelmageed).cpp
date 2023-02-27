#include <bits/stdc++.h>
#define el '\n'
using namespace std;

int main()
{
   int n; //get n from user
   cin >>n;
   //map polyhedrons with their numbers of faces
   map<string,int>m={{"Tetrahedron",4},
                    {"Cube",6},
                    {"Octahedron",8},
                    {"Dodecahedron",12},
                    {"Icosahedron" ,20}};

    long long ans = 0;//init the ans with 0
    
    while(n--)
    {
        string s; //get the name of the polyhedron
        cin>>s;
        ans += m[s]; //add the value of this 'key' polyhedrons to the ans
    }
    
    cout<<ans<<el;
}