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

//https://vjudge.net/contest/575136#problem/H
int pos( vector<int>&v , int x){

    int low = 0 , high = v.size()-1 , ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if( v[mid] >= x){
            ans = mid;
            high = mid -1 ;
        }
        else low = mid + 1;
    }

    return ans;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        
        vector<int>v;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int a; cin >>a;
            sum += a;
            v.push_back(sum);

        }

        int q; cin >> q;

        while (q--)
        {
            int a; cin >> a;

            cout << pos(v,a)+1 << endl;
        }
        
        

        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  02-February-2024  21:41:14
*/ 
 