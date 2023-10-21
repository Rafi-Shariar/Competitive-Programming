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

    for (int tt = 1; tt <=t; tt++)
    {
        int n; cin>>n;
        map<string,int>mp;
        set<int>st;

        for (int i = 0; i < n; i++)
        {
            string s; int a,b,c;
            cin >> s >> a >> b >> c;
            int volume = a * b * c;

            mp[s] = volume;
            st.insert(volume);

        }

        printf("Case %d: ",tt);

        if(st.size() > 1){

            int los = *st.begin();
            int theif = 0;

            for(auto i : st) theif = i;

            string l,th;

            for(auto i : mp){

                debug(i);
                if(i.second == los) l = i.first;
                if(i.second == theif) th =  i.first;
            }

           cout<<th<<" took chocolate from "<<l<<endl;
            
        }
        else cout<< "no thief" <<endl;
        
    }
    

    return 0;
}