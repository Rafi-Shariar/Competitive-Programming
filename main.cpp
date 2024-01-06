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
        int n; int q;
        cin >> n >> q;

        vector< pair<int,int>>v(n);

        for (int i = 0; i < n; i++)
        {
            v[i] = {i+1, 0};
        }

        while (q--)
        {
            int x;
            cin >> x;

            if( x == 1){
                char ch; cin >> ch;
                vector< pair<int,int>>tmp(n);
                int a = v[0].first;
                int b = v[0].second;

                if(ch == 'U'){

                    tmp[0] = {a,b+1};
                    for (int i = 1; i < n; i++)
                    {
                        tmp[i] = v[i-1];
                    }

                    v = tmp;

                }
                else if( ch == 'D'){

                    tmp[0] = {a,b-1};
                    for (int i = 1; i < n; i++)
                    {
                        tmp[i] = v[i-1];
                    }

                    v = tmp;
                }
                else if( ch == 'L'){

                    tmp[0] = {a-1, b};
                    for (int i = 1; i < n; i++)
                    {
                        tmp[i] = v[i-1];
                    }

                    v = tmp;
                }
                else
                {
                    tmp[0] = {a+1, b};
                    for (int i = 1; i < n; i++)
                    {
                        tmp[i] = v[i-1];
                    }

                    v = tmp;
                }
                
            }
            else
            {
                int y ; cin >> y;

                cout << v[y-1].first << " " << v[y-1].second << endl;
            }
            

        }
        
        
    }
    

    return 0;
}