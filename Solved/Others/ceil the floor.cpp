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

//https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?leftPanelTab=0
pair<int, int> getFloorAndCeil(vector<int> &v, int n, int x) {
	// Write your code here.

    int a,b;

    auto LB = lower_bound( v.begin(), v.end(), x) - v.begin();
    
    if( v[LB] == x) a = v [LB], b = v [LB];
    else
    {
        if( LB == 0) a = -1;
        else a = v[LB - 1];

        if( LB == n ) b = -1;
        else b = v[LB];
    }

    return make_pair(a,b);
    


}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
       int n,m;
       cin>>n>>m;
       vector<int>v(n);
       forin(v,n);

       cout<< getFloorAndCeil(v,n,m) <<endl;



        
    }
    

    return 0;
}