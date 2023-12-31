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

//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
int BS( vector<int>&v, int a){

    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low )/2;

        if( v[ mid ] <= a) low = mid + 1;
        else high = mid - 1;
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
        int n,q;
        cin >> n >> q;
        vector<int>v(n);
        forin(v,n);

        while (q--)
        {
            int a; cin >> a;

            cout << BS(v,a) << endl;
        }
        
        
    }
    

    return 0;
}