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

//https://vjudge.net/contest/602040#problem/I

int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        string a,b;
        cin >> a >> b;

        map<char,int>aa,bb;

        for(int i=0; i<a.size(); i++) aa[ a[i]]++;
        for(int i=0; i<b.size(); i++) bb[ b[i]]++;


        sort(a);
        sort(b);

        debug(aa, bb);
        
        int ans = 0;

        for(auto i : bb){

           // cout << bb[i.first] << " " << aa[ i.first] << endl;

            if( bb[i.first] > 0 && aa[ i.first] > 0) ans += min( bb[i.first] , aa[ i.first]);

        }

        cout << ans << endl;
        
        

        
        
    }
    

    return 0;
}