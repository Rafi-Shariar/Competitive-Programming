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


//https://atcoder.jp/contests/abc335/tasks/abc335_c
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; int q;
        cin >> n >> q;

        deque<pair<int,int>>dq;

        for (int i = 1; i <= n; i++)
        {
            dq.push_back({i,0});
        }

        while (q--)
        {
            int x;
            cin >> x;

            if( x == 1){

                char ch ; cin >> ch;
                int a = dq.front().first;
                int b = dq.front().second;

                if( ch == 'U'){

                    dq.push_front({a,b+1});
                    dq.pop_back();
                }
                else if ( ch == 'D'){

                    dq.push_front({a,b-1});
                    dq.pop_back();
                }
                else if( ch == 'L'){

                    dq.push_front({a-1, b});
                    dq.pop_back();
                }
                else{

                    dq.push_front({a+1, b});
                    dq.pop_back();
                }
 
            }
            else
            {
                int y; cin >> y;

                auto it = dq.begin() + (y-1);

                cout << it->first << " " << it->second << endl;
   
               
            }
            

        }
        
        
    }
    

    return 0;
}