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


//https://vjudge.net/contest/589783#problem/U
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n, cur, nott;
        cin >> n >> cur >> nott;

        string s; cin >> s;

        int one = 0, zero = 0;

        int tmp = cur;

        bool ok = false;
        if(tmp == n) ok = true;

        for (int i = 0; i < s.size(); i++)
        {
            
            if( s[i] == '+'){ one++; tmp++;}
            else {zero ++; tmp--;}

            if( tmp == n ) ok = true;

            
        }

        if( ok ){
            cout << "YES" << endl;
            continue;
        }
        else if( one + cur < n) cout << "NO" << endl;
        else cout << "MAYBE" << endl;



        
    }
    

    return 0;
}