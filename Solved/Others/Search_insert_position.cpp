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

//https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTab=0
int searchInsert(vector<int>&v, int m)
{
	auto LB = lower_bound(v.begin() , v.end(), m) - v.begin();

    return LB;

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

       cout<<searchInsert(v,m)<<endl;



        
    }
    

    return 0;
}