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
    //cin>>t;
 
    while(t--)
    {
 
        int n; cin>>n;
        vector<bool>freq(n+1,false);
        for(int i=0; i<n-1; i++){
 
            ll a; cin>>a;
            freq[a] = true;
        }
 
        for (int i = 1; i <=n; i++)
        {
            if(!freq[i]){
                cout<<i<<endl;
                return 0;
            }
        }
        
 
 
    }
 
    return 0;
}
