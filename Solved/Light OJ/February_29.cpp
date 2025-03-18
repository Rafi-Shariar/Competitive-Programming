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



bool leap(int yr){

    if( yr % 400 == 0) return true;
    if( yr % 100 == 0 ) return false;
    if( yr % 4 == 0) return true;

    return false;
}
void fun(map<string,int>&mp){
    mp["January"] = 0;     mp["February"] = 1;      mp["March"] = 2;     mp["April"] = 3;
    mp["May"] = 4;     mp["June"] = 5;      mp["July"] = 6;     mp["August"] = 7;
    mp["September"] = 8;     mp["October"] = 9;      mp["November"] = 10;     mp["December"] = 11;

}
int main()
{
    fast

    int t=1;
    cin>>t;

    map<string,int>mp;
    fun(mp);

    for(int tt=1; tt<=t; tt++)
    {
        string s; int d1; char cc; int yr;
        string s2; int d2; char cc2; int yr2;

        cin >> s >> d1 >> cc >> yr;
        cin >> s2 >> d2 >> cc2 >> yr2;

        int c = 0;

        for (int i = yr; i <= yr2; i++)
        {
            if(leap(i)) c++;
        }

        if( leap(yr)){

            int idx = mp[s];

            if( idx >= 2 ) c--;
        }

             if( leap(yr2)){

            int idx = mp[s2];

            if( idx == 0 ) c--;
        }

        printf("Case %d: %d\n",tt,c);


    }
    

    return 0;
}