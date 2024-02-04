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

//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B


int BS(vector<int>&v , int x){

    int low = 0 , high = v.size()-1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if( v[mid] >= x) high = mid-1;
        else low = mid + 1;
    }

    return low;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int>a(n) , b(m);
        forin(a,n);

        while (m--)
        {
            int x; cin >> x;

            cout << BS(a,x) << " ";
        }
        

        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  02-February-2024  13:49:15
*/ 
 