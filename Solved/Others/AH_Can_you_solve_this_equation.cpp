#include<iostream>
using namespace std;

//https://vjudge.net/contest/577004#problem/AH
double pos( double x){

    return 8 * x*x*x*x + 7 * x * x * x + 2 * x * x + 3 * x + 6;
}
int main()
{
    //fast

    int t=1;
    cin>>t;

    while (t--)
    {
        double n; cin >> n;

        if( n < pos(0) || n > pos(100)){
            cout << "No solution!\n" << endl;
        }
        else
        {
            double low = 0.0 , high = 100.0;

            int it = 40;
            
            while (it--)
            {
                double mid = low + (high-low)/2;

                if ( pos(mid) >= n){
                    high = mid;
                }
                else low = mid;
            }
        printf("%.4lf\n", low);
            
        }

        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  30-January-2024  12:10:20
*/ 
 