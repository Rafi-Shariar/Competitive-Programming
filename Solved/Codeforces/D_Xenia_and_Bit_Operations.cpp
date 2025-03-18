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

//https://codeforces.com/contest/339/problem/D
class SegmentTree{
    vector<int>seg;
    public:
    SegmentTree(int n){
        seg.resize(4*n  + 1 );
    }

    void build(int index , int low , int high , vector<int>&v , int orr){
        if(low == high){
            seg[index] = v[low];
            return;
        }

        int mid = (low + high)/2;

        build(2*index+1 , low , mid , v , !orr);
        build(2*index+2 , mid+1 , high , v , !orr);

        if( orr) seg[index] = seg[2*index+1] | seg[2*index + 2];
        else seg[index] = seg[2*index+1] ^ seg[2*index + 2];
    }


    void update(int index ,int low , int high , int i , int val , int orr){

        if( low == high){
            seg[index] = val;
            return;
        }

        int mid = (low + high)/2;

        if( i <= mid) update(2*index+1 , low , mid , i , val, !orr);
        else update(2*index+2 , mid+1 , high , i , val , !orr);


        if( orr) seg[index] = seg[2*index+1] | seg[2*index + 2];
        else seg[index] = seg[2*index+1] ^ seg[2*index + 2];


    }


    int p(){
        return seg[0];
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
        int el = pow(2,n);
        vector<int>v(el);
        forin(v, el);

        SegmentTree sg(el);

        if( n%2) sg.build(0,0,el-1,v,1);
        else sg.build(0,0,el-1,v,0);

        while (q--)
        {
            int idx , val;
            cin >> idx >> val;
            idx--;

            if( n%2) sg.update(0,0,el-1, idx , val , 1);
            else sg.update(0,0,el-1, idx , val , 0);

            cout << sg.p() << endl;

          


        }
        

      
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  31-January-2024  13:22:38
*/ 
 