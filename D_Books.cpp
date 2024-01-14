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


//https://vjudge.net/contest/603526#problem/D
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int books,time;
        cin >> books >> time;

        vector<int>v(books);
        forin(v,books);

        //int c = 0;
        int ans = 0;


        for (int i = 0; i < books; i++)
        {
            int cur = 0 , c = 0;

            for (int j = i; j < books; j++)
            {
                if( cur + v[j] <= time){
                    c++;
                    cur += v[j];

                    //cout << v[i] << "-->" << cur << " -- >" << c << endl;

                    ans = max(ans,c);
                }
                else{

                    ans = max(ans, c);
                    break;
                }
            }
            
        }

        cout << ans << endl;
        
    
    }
    

    return 0;
}