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


//https://vjudge.net/contest/602871#problem/B
int main()
{
    fast

    int n;

    while (cin >> n && n!=0)
    {
        vector<ll>a(n);
        forin(a,n);

        int m; cin >> m;
        vector<ll>b(m);
        forin(b,m);

        ll s1 = 0, s2 = 0;

        int i=0, j=0;

        while (i < n && j < m)
        {
            if ( a[i] < b[j] ){

                //cout << " 1 ";

                s1 += a[i];
                i++;
            }
            else if ( a[i] > b[j] ){
                //cout << " 2 ";
                s2 += b[j];
                j++;
            
            }
            else if( a[i] == b[j]){
                //cout << " 3 ";

                ll tmp = s1 + a[i];
                ll tmp2 = s2 + b[j];

                if( tmp > tmp2) {
                    s1 = tmp;
                    s2 = tmp;
                }
                else{

                     s1 = tmp2;
                     s2 = tmp2;

                }

                i++;
                j++;
            }

            // cout << "--> ";

            // cout << s1 << " " << s2 << endl;

            
        }


        while (i < n)
        {
            s1 += a[i];
            i++;
        }

        while ( j < m)
        {
            s2 += b[j];
            j++;
        }
        
        

       // cout << s1 << " " << s2 << endl;

       cout << max(s1,s2) << endl;
        
    }
    

    return 0;
}