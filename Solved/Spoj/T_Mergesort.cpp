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

//https://www.spoj.com/submit/MERGSORT/
vector<int> marge_sort( vector<int>a){

    if( a.size() <= 1) return a;

    int mid = a.size()/2;

    vector<int>b,c;

    for(int i=0 ; i < mid ; i++) b.push_back(a[i]);
    for(int i = mid ; i< a.size(); i++) c.push_back(a[i]);

    vector<int>sorted_b = marge_sort(b);
    vector<int>sorted_c = marge_sort(c);

    vector<int>sorted_a;

    int idx1 = 0 , idx2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if(idx1 == sorted_b.size()){

            sorted_a.push_back( sorted_c[idx2]);
            idx2++;
        }
        else if( idx2 == sorted_c.size()){

            sorted_a.push_back( sorted_b[idx1]);
            idx1++;
        }
        else if( sorted_b[idx1] < sorted_c[idx2]){

            sorted_a.push_back( sorted_b[idx1]);
            idx1++;
        } 
        else
        {
            sorted_a.push_back( sorted_c[idx2]);
            idx2++;
        }
        
    }


    return sorted_a;
    

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        vector<int>v;
        int n;
        while(cin >> n){
            v.push_back(n);
        }

        vector<int>ans = marge_sort(v);

        for(auto i : ans) cout << i << " ";
        cout << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  24-January-2024  13:09:21
*/ 
 