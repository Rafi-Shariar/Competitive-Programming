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

//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3183
bool pos(vector<int>&v, int x){

    if( v[0] > x ) return false;
    if( v[0] == x) x--;

    for (int i = 1; i < v.size(); i++)
    {
        int dis = v[i] - v[i-1] ;

        if( dis > x) return false;

        if( dis == x) x--;
    }

    return true;
    

}
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        printf("Case %d: ",tt++);

        int low = 0 , high = 1e9 , ans = 0;

        while (low <= high)
        {
            int mid = low + (high-low)/2;

            if(pos(v,mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  01-February-2024  22:16:44
*/ 
 