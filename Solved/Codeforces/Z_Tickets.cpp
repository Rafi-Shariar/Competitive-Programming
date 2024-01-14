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

        queue<int>q;


        while (n--)
        {
            int a,b;
            cin >> a >> b;

            if( a == 1) q.push(b);
            else
            {
                if( !q.empty() && q.front() == b){
                    cout << "Yes" << endl;
                    q.pop();
                }
                else
                {
                    if(q.front() != b){
                        cout << "No" << endl;
                        q.pop();
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                    
                }
                
            }
            
        }

        
        
        
    }
    

    return 0;
}