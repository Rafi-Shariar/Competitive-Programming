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



int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        string s; cin >> s;

        int alex = 0;

        for (int i = 0; i < s.size(); i+=2)
        {
            if( s[i] == s[i+1]){
                
                if(alex) alex = 0;
                else alex = 1;

            }
            else break;
        }

        cout << alex << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  29-January-2024  13:44:01
*/ 
 