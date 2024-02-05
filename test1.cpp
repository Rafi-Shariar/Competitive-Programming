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


int pos(vector<int>&v, int mid, int k){

    int c = 1;
    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if( sum + v[i] > mid){
           c++;
           sum = v[i];
        }
        else
        {
            sum += v[i];
        }
        
    }


   
    

    //cout << mid << "--" << c << endl;

    return c ;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        forin(v,n);

        for (int i = 1; i <= 12; i++)
        {
            cout << i << "--" << pos(v,i,k) << endl;
        }
        

        // int low = 1 , high = 1e6 + 1 , ans = 1;

        // while (low <= high)
        // {
        //     int mid = low + (high - low)/2;

        //     if(pos(v,mid,k)){
        //         ans = mid;
        //         high = mid - 1;
        //     }
        //     else low = mid + 1;
        // }

        // cout << ans << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  05-February-2024  22:43:09
*/ 
 