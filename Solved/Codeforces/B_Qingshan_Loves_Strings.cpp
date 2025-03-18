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


//https://codeforces.com/contest/1890/problem/B
bool check(string s){

    if ( s.size()==1) return true;

    for (int i = 0; i < s.size()-1; i++)
    {
        if( s[i] == s[i+1]) return false;
    }

    return true;
    
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;

        if( check(a)) cout << "Yes" << endl;
        else if ( !check(b)) cout << "No" << endl;
        else
        {
            bool pos = true;
            for (int i = 0; i < a.size()-1; i++)
            {
                if( a[i] == a[i+1]){

                    if( a[i] == b[0] || b[ m -1 ] == a[i+1]){
                         pos = false;
                         break;
                    }
                }
            }
            
            if( pos ) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        


        
    }
    

    return 0;
}