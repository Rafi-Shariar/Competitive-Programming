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

//https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
class SegmentTree{
    vector<ll>seg;
    public:
    SegmentTree(int n){
        seg.resize(4*n  + 1 );
    }

    void build(int index , int low , int high , vector<ll>&v){
        if(low == high){
            seg[index] = v[low];
            return;
        }

        int mid = (low + high)/2;

        build(2*index+1 , low , mid , v);
        build(2*index+2 , mid+1 , high , v);

        seg[index] = ( seg[2*index+1] + seg[2*index+2]);
    }

    ll query(int index , int low , int high , int l , int r){

        if( r < low || high < l) return 0;

        if( low >= l && high <= r) return seg[index];

        int mid = (low + high) >> 1;

        ll left = query(2*index+1 , low , mid  , l , r);
        ll right = query(2*index+2 , mid+1 , high , l ,r);

        return (left + right);
    }


    void update(int index ,int low , int high , int i , int val){

        if( low == high){
            seg[index] = val;
            return;
        }

        int mid = (low + high)/2;

        if( i <= mid) update(2*index+1 , low , mid , i , val);
        else update(2*index+2 , mid+1 , high , i , val);

        seg[index] = ( seg[2*index+1] + seg[2*index+2]);

    }


};
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<ll>v(n);
        forin(v,n);
        SegmentTree sg(n);
        sg.build(0,0,n-1,v);

        while (q--)
        {
            int type , x,y;
            cin >> type >> x >> y;

            if( type == 1){
                sg.update(0,0,n-1,x,y);
            }
            else
            {
                cout << sg.query(0,0,n-1,x,y-1) << endl;
            }
            

            
        }
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  28-January-2024  23:02:18
*/ 
 