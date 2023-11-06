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
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        if( n == 1) cout << "Yes" << endl;
        else
        {
            for (int i = n-1; i > 0; i--)
            {
                if( v[i] < v[i-1]){
                    v[i-1] -= 1;
                }
            }

            bool pos = true;

            for (int i = 0; i < n-1; i++)
            {
                if( v[i] > v[i+1]){
                    
                    pos = false;
                    break;
                }
            }

            if(pos) cout << "Yes" << endl;
            else cout << "No" << endl;
            

   
            
        }
        
        
    }
    

    return 0;
}