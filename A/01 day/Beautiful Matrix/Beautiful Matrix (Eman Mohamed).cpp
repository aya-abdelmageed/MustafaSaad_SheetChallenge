//              بسم الله الرحمن الرحيم

//author Eman Mohamed
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5][5] , x , y;//declar the matrix and two variables which used below
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin>>arr[i][j];  // git the element of the matrix 
            if(arr[i][j] == 1) 
            {
                x = i , y = j; //git the index of the 1 element
            }
        }
    }
    x++,y++; // increment x axesis and y axesis
    cout<<(abs(3 - x)) + (abs(3 - y))<<"\n"; // decreament from (3,3) as the point (3,3) is the middle of the matrix of 5 * 5
}