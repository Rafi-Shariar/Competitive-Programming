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
    //fast

    int t=1;
    cin>>t;
    cin.ignore();

    while (t--)
    {
        string s; cin >> s;

        if( s.size() == 0) cout << "Yes" <<endl;
        else
        {
            stack<char>st;

            bool ok = true;

            for (int i = 0; i < s.size(); i++)
            {
                if( s[i] == '(' || s[i] == '[') st.push(s[i]);
                else
                {

                    if (st.empty() || (s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '['))
                    {
                        ok = false;
                        break;
                    }
                    st.pop();
                    
                }                
  
            }

            if( ok && st.empty()) cout << "Yes" <<endl;
            else cout << "No" <<endl;
            
        }
        

        
    }
    

    return 0;
}