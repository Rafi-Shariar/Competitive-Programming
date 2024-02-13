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


int BS( vector<int>&v , int target){

    int low = 0 , high = v.size() - 1 ,ans = -1;

    while (low <= high)
    {
        int mid = low + (high-low)/2;

        if( v[mid] == target) return mid;

        if( v[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
     
}
int main()
{
    fast

    int n; cin >>n;
    vector<int>v(n);
    forin(v,n);

    int target; cin >> target;

    cout << BS(v,target) << endl;
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  12-February-2024  12:35:21
*/ 
 