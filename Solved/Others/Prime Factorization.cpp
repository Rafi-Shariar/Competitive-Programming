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


//https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        
        int x = n;

        vector<int>v;
        

        for(int i=2; i*i<=n; i++){

            while (n % i == 0 )
            {
                v.push_back(i);
                n/=i;
            }
            
        }
        if( n > 2) v.push_back(n);

        cout << x << ": ";

        for (int i = 0; i < v.size()-1; i++)
        {
            cout << v[i] << " ";
        }

        cout << v[v.size()-1] << endl;
        
     
        
    }
    

    return 0;
}