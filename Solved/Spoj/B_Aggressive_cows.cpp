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

//https://www.spoj.com/problems/AGGRCOW/
bool pos(int mid , vector<int>&v, int cows){

    int c = 1;
    int j = 0;

    for (int i = 1; i < v.size(); i++)
    {
        if( v[i] - v[j] >= mid){
            c++;
            j = i;
        }
    }

    return c >= cows;
    
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n, cows;
        cin >> n >> cows;

        vector<int>v(n);
        forin(v,n);

        sort(v);

        int low = 0, high = 1e9 + 5 , ans = 0;

        while (low <= high)
        {
            int mid = low + (high - low)/2;

            if( pos(mid,v,cows)){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }

        cout << ans << endl;        

        


    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  20-January-2024  21:38:01
*/ 
 