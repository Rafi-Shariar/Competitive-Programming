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
//for finding the minimum in L--R

class SegmentTree{
    vector<int>seg;
public:
     SegmentTree(int n){
        seg.resize( 4*n + 1 );
     }

    void build(int ind , int low , int high , vector<int>&v ){

    if( low == high){
        seg[ind] = v[low];
        return;
    }

    int mid = (low + high)/2;

    build(2*ind + 1, low , mid , v );
    build(2*ind + 2 , mid+1 , high , v );

    seg[ind] = min( seg[2*ind + 1] , seg[2*ind + 2]);

   }

    int query(int ind , int low , int high , int l , int r ){
    
    if( r < low || high < l) return INT_MAX; // no overlap

    if( low >= l && high <= r) return seg[ind]; // overlap

    int mid = (low + high) >> 1;

    int left = query( 2*ind + 1 , low , mid , l , r );
    int right = query( 2*ind + 2 , mid+1 , high , l , r);

    return min(left , right);
  }

   void update(int ind , int low , int high , int i , int val ){

    if( low == high){
        seg[ind] = val;
        return;
    }

    int mid = (low + high) / 2;

    if( i <= mid ) update( 2*ind + 1, low , mid , i , val );
    else update( 2*ind + 2 , mid + 1 , high , i , val );

    seg[ind] = min( seg[2*ind + 1 ], seg[2*ind + 2]);
  }


};


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

        SegmentTree sg1(n);
        sg1.build(0,0,n-1 , v );

        cout << sg1.query(0,0,n-1, 3 , 7 ) << endl;
        sg1.update(0,0,n-1, 4, 1);
        cout << sg1.query(0,0,n-1, 3 , 7 ) << endl;
        sg1.update(0,0,n-1, 4, 2);
        cout << sg1.query(0,0,n-1, 3 , 7 ) << endl;
        
        

    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  26-January-2024  22:32:41
*/ 
 