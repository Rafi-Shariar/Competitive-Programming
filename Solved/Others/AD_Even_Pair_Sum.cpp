#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


//https://www.codechef.com/problems/EVENPSUM
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll A,B;
        cin >> A >> B;

        ll odd_a = A/2 ;
        if( A & 1) odd_a++;
        ll even_a = A/2;

        ll odd_b = B/2;
        if( B & 1) odd_b ++;
        ll even_b = B/2;

        cout << (odd_a * odd_b) + (even_a * even_b) << endl;



    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  16-February-2024  11:22:08
*/ 
 