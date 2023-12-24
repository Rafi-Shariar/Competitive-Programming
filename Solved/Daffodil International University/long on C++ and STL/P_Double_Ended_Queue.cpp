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


//https://vjudge.net/contest/600885#problem/P
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        int sz, n; cin >> sz >> n;
        cin.ignore();

        int i = 0, a;
        deque<int>dq;

        printf("Case %d:\n", tt++);
        while (n--)
        {
            string s; cin >> s;

            if( s == "pushLeft"){
                cin >> a;

                if( dq.size() == sz) cout << "The queue is full" << endl;
                else{
                    dq.push_front(a);
                    cout << "Pushed in left: " << a << endl;
                }

                i++;
            
            }
            else if ( s == "pushRight"){
                cin >> a;

                if( dq.size() == sz) cout << "The queue is full" << endl;
                else {
                    dq.push_back(a);
                    cout << "Pushed in right: " << a << endl;
                }
                i++;
            }
            else if(s == "popLeft"){

                if( dq.empty()) cout << "The queue is empty" << endl;
                else
                {
                    cout << "Popped from left: "<< dq.front() << endl;
                    dq.pop_front();
                    i--; 
                }
                
            }
            else if ( s== "popRight"){
                if( dq.empty()) cout << "The queue is empty" << endl;
                else
                {
                    cout << "Popped from right: "<< dq.back() << endl;
                    dq.pop_back();
                    i--; 
                }
            }

            debug(dq);

        }
        
     
    }
    

    return 0;
}