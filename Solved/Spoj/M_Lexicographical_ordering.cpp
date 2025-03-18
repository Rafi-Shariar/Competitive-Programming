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


//https://www.spoj.com/problems/MAIN71/en/
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        string s; cin >> s;
        string a; cin >> a;
        string b; cin >> b;

        map<char,int>sequence;

        for (int i = 0; i < s.size(); i++)
        {
            sequence[s[i]] = i+1;
        }


        int flag = 0;


        for (int i = 0; i < a.size(); i++)
        {
            char c_a = a[i];
            char c_b = b[i];

            if( sequence[c_a] > sequence[c_b] ){
                flag = 1;
                break;
            }
            else if(  sequence[c_a] < sequence[c_b] ){
                flag = 2;
                break;
            }

        }

        if( flag == 0) cout << "=" << endl;
        else if( flag == 1) cout << ">" << endl;
        else cout << "<" << endl;
        

    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  22-January-2024  21:14:23
*/ 
 