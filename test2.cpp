#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main()
{
    fast();

    int t=1;
    cin>>t;

    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int i=0;

        string ans;
        bool pos = false;

        while (i<n-2)
        {
            int c=0;

            if(s[i]=='1') c++;
            if(s[i+1]=='1') c++;
            if(s[i+2]=='1') c++;

            //cout<<c<<endl;

            if(c>=2 && !pos){

                ans += "100";
                i+=3;
                pos = true;

            }
            else
            {
                ans += s[i];
                i++;
            }
            
            
        }

        if(n>3){
            ans += s[i++];
            ans +=s[i];
        }

        cout<<ans<<endl;
        
    }

    return 0;
}