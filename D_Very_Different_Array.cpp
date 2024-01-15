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
        int n,m;
        cin >> n >> m;

        vector<ll>a(n);
        vector<ll>b(m);

        forin(a,n);
        forin(b,m);

        sort(a);
        sort(b);

        int i=0, j = b.size() - 1;

        int flag = 0;
        int c = 0;
        ll sum = 0;
        int x = 0 , y = a.size()-1;

        while (i <= j)
        {
            if( c == n) break;

            if( x == y ){

                int p = abs(a[x] - b[i]);
                int q = abs(a[x] - b[j]);

                sum += max(p,q);
                c++;
                continue;

            }

            if( flag == 0){

                sum += abs( a[x++] - b[j]);
                j--;
                flag = 1;
                c++;
            }
            else
            {
                sum += abs(a[y--] - b[i]);
                i++;
                flag = 0;
                c++;
            }
            
        }

        cout << sum << endl;
         
        
    }
    

    return 0;
}