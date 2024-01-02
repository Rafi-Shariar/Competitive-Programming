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

//https://codeforces.com/contest/102/problem/B
ll digit_sum( ll n){

    ll sum = 0;

    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        string s; cin >> s;
        ll sum = 0;

        if( s.size() == 1) cout << 0 << endl;
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                sum += (s[i] - '0');
            }

            int c = 0;

            while (sum >= 10)
            {
                sum = digit_sum(sum);
                c++;
                
            }

            cout << c+1 << endl;
            
            
        }
        
        
        
    }
    

    return 0;
}