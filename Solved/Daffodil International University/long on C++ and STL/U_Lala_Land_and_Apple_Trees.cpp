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


//https://vjudge.net/contest/600885#problem/U
int main()
{
    fast

    int n; cin >> n;
    vector< pair<int,int> >pos,neg;

    for (int i = 0; i < n; ++i)
    {
        int a,b; cin >> a >> b;

        if(a>0) pos.push_back( {a,b});
        else neg.push_back( {a,b});
    }

    int sum = 0;

    sort(pos.begin(), pos.end());
    sort(neg.rbegin(), neg.rend() );

    debug(pos,neg);

    if( pos.size() == neg.size()){

        for (int i = 0; i < pos.size(); ++i)
        {
            sum += (pos[i].second + neg[i].second);
        }
    }
    else if( pos.size() > neg.size()){

        for (int i = 0; i < neg.size(); ++i)
        {
            sum += (pos[i].second + neg[i].second);
        }

        debug(sum);

        sum += pos [ neg.size() ].second;

    }
    else{

        for (int i = 0; i < pos.size(); ++i)
        {
            sum += (pos[i].second + neg[i].second);
        }

        sum += neg[ pos.size()].second;
    }

    cout << sum << endl;

    

    return 0;
}