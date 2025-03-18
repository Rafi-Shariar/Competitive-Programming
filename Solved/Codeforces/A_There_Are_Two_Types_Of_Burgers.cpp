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

//https://codeforces.com/problemset/problem/1207/A
int prior_beef(int buggers , int beef, int chic , int B , int C){

    int sum = 0;

    int mn = min(buggers , beef);

    sum += (mn*B);
    buggers -= mn;
    sum += (min(buggers,chic) * C);

    return sum;
    
}
int prior_Chicken(int buggers , int beef, int chic , int B , int C){
    
    int sum = 0;

    int mn = min(buggers , chic);

    sum += (mn*C);
    buggers -= mn;
    sum += (min(buggers,beef) * B);

    return sum;
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int buns,beef,chic;
        cin >> buns >> beef >> chic ;

        int B,C;
        cin >> B >> C;

        int buggers = buns/2;

        int total1 = prior_beef(buggers , beef , chic , B , C);
        int total2 = prior_Chicken(buggers , beef , chic , B , C);

        cout << max(total1 , total2) << endl;





    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  23-January-2024  21:31:25
*/ 
 