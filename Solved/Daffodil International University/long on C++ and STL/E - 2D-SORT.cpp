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


//https://vjudge.net/contest/600885#problem/E

bool comp(pair<int, int> x, pair<int, int> y) {

    if (x.first > y.first) return false;
    else if (x.first == y.first && x.second < y.second) return false;
    else return true;
}

int main()
{
    //fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<pair<int,int>>v(n);

        for (int i = 0; i < n; ++i)
        {
        	cin >> v[i].first >> v[i].second ;
        }

        sort( v.begin(), v.end(), comp);


        for(auto i : v) cout << i.first << " " << i.second << endl;




    }
    

    return 0;
}