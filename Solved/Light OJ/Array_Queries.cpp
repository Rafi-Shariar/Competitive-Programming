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

//https://lightoj.com/problem/array-queries
class SegmentTree{
    vector<int>seg;
    public:
    SegmentTree(int n){
        seg.resize(4*n+1);
    }

    void build(int i , int low , int  high , vector<int>&v){

        if(low == high){
            seg[i] = v[low];
            return ;
        }

        int mid = (low + high)/2;

        build(2*i+1 , low , mid ,v );
        build(2*i+2 , mid+1 , high , v );

        seg[i] = min( seg[2*i+1] , seg[2*i+2]);
    }

    int query(int i , int low , int high , int l , int r){

        if( r < low || l > high) return INT_MAX;
        if( low >= l && high <= r) return seg[i];

        int mid = (low + high)/2;

        int left = query(2*i+1 , low , mid , l , r);
        int right = query(2*i+2 , mid+1 , high , l , r);

        return min(left,right);
    }
};
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int>v(n);
        forin(v,n);

        SegmentTree sg(n);
        sg.build(0,0,n-1,v);

        printf("Case %d:\n",tt++);

        while (q--)
        {
            int l,r;
            cin >> l >> r;
            l--;
            r--;

            cout << sg.query(0,0,n-1,l,r) << endl;


        }
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  31-January-2024  11:55:44
*/ 
 