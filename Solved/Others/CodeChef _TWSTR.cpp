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

    int n; cin >> n;
    set< pair<string,int>>st;

    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        int a; cin >> a;

        st.insert({s,a});
    }


    debug(st);

    int q; cin >> q;

    while(q--){

        string s;  cin >> s;

        string ans = "";
        int mx = 0;
        int cur = INT_MIN;


        for( auto i : st){

            int c = 0;

            if( i.first[0] == s[0]){
                string tmp = i.first;
                int cur2 = i.second;

                for (int j = 0; j < s.size(); j++)
                {
                    if(s[j] == tmp[j]) c++;
                }

                if( c > mx ){
                    ans = tmp;
                    mx = c;
                    cur = i.second;
                }
                else if( c == mx){

                    if( i.second > cur){

                        ans = tmp;
                        cur = i.second;
                    }

                }


                // cout << "--> ";

                // cout << i.first << " " << s << " " << c << " " << mx << " " << i.second << endl;
                
            }


        }

        if( mx >= s.size()) cout << ans << endl;
        else cout << "NO" << endl;

    }
    
    

    return 0;
}