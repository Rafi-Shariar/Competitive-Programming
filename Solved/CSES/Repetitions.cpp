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
        string s; cin>>s;
        vector<int>v(s.size(),0);
        v[0] = 1;
 
        for(int i=1; i< s.size(); i++){
 
            if(s[i] == s[i-1]) v[i] = v[i-1]+1;
            else v[i] = 1;
        }
 
        int mx = 1;
 
        for(int i=0; i<v.size(); i++) mx = max(mx, v[i]);
 
        cout<<mx<<endl;
        
    }
 
    return 0;
}
