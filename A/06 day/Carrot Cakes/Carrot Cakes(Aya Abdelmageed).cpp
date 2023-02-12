#include <bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    int n,t,k,d;
    cin >>n>>t>>k>>d;
    if( k >= n) // at time t can bake number of cakes more than required we don't need new oven.
        cout<<"NO\n";
    else
    {
        int total1 = 0, total2 = 0;
        //first caculate the total time without build another oven (total1)
        
            total1 = ceil((double) n / k) * t; //without ceil ==> total1 = (n + k - 1) / k *t;
        //second caculate the total time without build another oven (total2)
        int  c = 0; // c is how many cakes baked;
        int i = 0,j = 0;
        int o1=0,o2 = d;
        while(c <= n)
        {
            if(o1 <= d) //only oven one is used
            {   
                o1 += t;
                c += k;
            }
                
            else //oven 1 and 2 are used but different time
            {
                o2 += t;
                c += k;
                if(c >= n)
                {
                    break;
                } 
                o1 += t;
                c += k;
            }    

        }
        total2 = max(o1,o2);  // total2 = maximum time used 2 oven
        
    
        if(total1 <= total2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
return 0;        
}
       
    

