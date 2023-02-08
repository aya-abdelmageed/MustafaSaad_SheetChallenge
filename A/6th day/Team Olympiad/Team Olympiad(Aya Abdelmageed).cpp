#include<bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int n; 
    cin >>n;
    int t[] = { 0, 0, 0 };//get count for each subject
    vector<int>v1; // for(index to each student in t1)
    vector<int>v2;
    vector<int>v3;
    for(int i = 0; i < n; i++)  
    {
        int a;
        cin >>a;
        t[a-1]++;
        if(a == 1)
            v1.push_back(i);
        else if(a == 2)
            v2.push_back(i);
        else
            v3.push_back(i);
    }
    sort(t,t+3);
    int min = t[0];//min number of teams;
    cout<<min<<el;
    for(int i = 0; i < min; i++)
    {
        cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<el;
    }

}