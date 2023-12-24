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
        deque<string>dq;

        while (n--)
        {
            int a; cin >> a;

            if( a == 1){
                string s; cin >> s;

                dq.push_front(s);
                                
            }
            else{

                string tmp = dq.back();
                dq.pop_back();
                dq.push_front(tmp);

                cout << tmp << endl;
            }
            
        }
        
        
    }
    

    return 0;
}