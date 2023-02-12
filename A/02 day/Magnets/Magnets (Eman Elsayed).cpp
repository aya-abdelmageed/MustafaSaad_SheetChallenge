// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int cnt = 1;
    // count the number of groups of magnets that attract each other 
    for (int i = 0;i<n-1;i++){
        // if the current magnet is different from the next magnet
        if(v[i] != v[i+1]){
            // increment the counter
            cnt++;
        }
    }
    // print answer
    cout << cnt;
}