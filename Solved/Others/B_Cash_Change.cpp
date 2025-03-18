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


//https://vjudge.net/contest/603526#problem/B
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>notes = {500,100,50,10,5,1};

        map<int,int>mp;

        mp[500] = n/500;
        n%=500;

        mp[100] = n/100;
        n%=100;

        mp[50] = n/50;
        n%=50;

        mp[10] = n/10;
        n%=10;

        mp[5] = n/5;
        n%=5;

        mp[1] = n/1;
        n%=1;

        for(auto i : mp){

            if( i.second > 0 ){

                for(int j = 0; j < i.second; j++ ) cout << i.first << " ";
            }
        }

        cout << endl;



        
    }
    

    return 0;
}