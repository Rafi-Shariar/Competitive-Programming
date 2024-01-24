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


//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=submit_problem&problemid=1998&category=0
int main()
{
    fast

    int n;

    while (cin >> n)
    {
        vector<int>v(n);
        map<int,int>freq;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[ v[i] ]++;
        }

        int money; cin >> money;

        int dis = INT_MAX;
        int book1,book2;


        for (int i = 0; i < n; i++)
        {
             freq[ v[i] ]--;
             int need = money - v[i];

             if( freq[need] && abs(v[i] - need) < dis){

                book1 = v[i];
                book2 = need;
                dis = abs(v[i] - need);

             }

             freq[ v[i] ]++;
        }


        if( book1 > book2) swap( book1 , book2);

        printf("Peter should buy books whose prices are %d and %d.\n\n" , book1 , book2);
        
        
        

    }
    
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  23-January-2024  19:52:37
*/ 
 