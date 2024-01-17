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


//https://www.codechef.com/START117D/problems/SHORTSPELL
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        bool found = false;
        int idx = 0;

        for (int i = 0; i < s.size()-1; i++)
        {
            if( !found){

                if( s[i] > s[i+1]){
                    idx = i;
                    found = true;
                    break;
                }
            }
        }

        if( is_sorted(s.begin() , s.end())){ 
            idx = n-1; 
        }


       
        for (int i = 0; i < n; i++)  
        {
            if(i==idx) continue;
            else cout << s[i];
        }

        cout << endl;
            
        
        
        
    }
    

    return 0;
}