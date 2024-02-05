
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



int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        int search; cin >> search ;


        int low = 0 , high = n-1 , ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low)/2;

            if( v[mid] == search){
                ans = mid;
                cout << "Index : " << mid << endl;
                break;
            }

            if( v[mid] < search){
                low = mid + 1;
            }
            else high = mid - 1;
        }


        if( ans == -1 ) cout << "Not Available" << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  05-February-2024  12:42:28
*/ 
 