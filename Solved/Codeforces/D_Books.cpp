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

//https://vjudge.net/contest/603526#problem/D
int check(vector<ll>& v, ll can, int books, int time) {

    ll i=0 , j = 0;
    ll now = 0, cur = 0;

    while ( j < v.size())
    {

        if( now + v[j] <= time){
            now += v[j];
            j++;

            cur = max(cur, j-i);
        }
        else
        {
            now = now - v[i];
            i++;
        }
        
    }

    //cout << cur << endl;


    return cur >= can;
    
}



int BS(vector<ll>&v, int books , int time){

    int low = 0 ,  high = books;
    int ans = 0;

    while (low <= high)
    {
        int can = low + ( high - low)/2; 

        if( check(v,can,books,time)){
           
            ans = can;
            low = can + 1;
        }
        else
        {
            high = can - 1;
        }
        
    }

    return ans;
    
    

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;

        vector<ll>v(n);
        forin(v,n);

        cout << BS(v,n,k) << endl;


        
    }
    

    return 0;
}