#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
//#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

//https://shorturl.at/fpqxZ
bool check( vector<int>&v, int cows, int mid){

    int c = 1 , j=0;
    int mx = 0;

    for(int i=1; i< v.size(); i++){

        if( v[i] - v[j] >= mid){
            c++;
            j = i;
        }
        
    }

    if( c >= cows) return true;

    return false;
}
int aggressiveCows(vector<int> &v, int k)
{
    sort( v.begin(), v.end());
    int low = 1;
    int high = v[ v.size()-1 ];

    while(low <= high){

        int mid = low + (high - low )/2;

        if( check(v,k,mid)) low = mid + 1;
        else high = mid - 1;

    }

    return high;

}

int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,cows;
        cin >> n >> cows;

        vector<int>v(n);
        forin(v,n);

        cout << aggressiveCows(v,cows) << endl;
    }
    

    return 0;
}