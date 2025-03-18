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


int pos(vector<int>&v, int x, int k){

    int c = 1;
    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if( sum + v[i] > x){
            c++;
            sum = v[i];
        }
        else sum += v[i];
    }
    
    return c;
}
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        forin(v,n);

        int high = 0;
        high = accumulate(v.begin() , v.end() , high);

        int low = *max_element(v.begin() , v.end());

        int ans = 0;

        while (low <=  high)
        {
            int mid = low + (high - low )/2;

            int now = pos(v,mid , k);

            if( now <= k){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;

        }

        printf("Case %d: ",tt++);




        cout << ans << endl;
        

    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  01-February-2024  23:42:50
*/ 
 