
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,m;
    cin>>n>>m;
    string s; cin>>s;

    set<char>st;

    for (int i = 0; i < m; i++)
    {
        char c ; cin>>c;
        st.insert(c);
    }

    ll ans = 0;

    ll i;

    for (i=0; i<n; i++)
    {
        ll j=i; 
        while (st.count(s[j]) && j<n)
        {
            j++;
        }

        ans +=( (j-i) * (j-i+1) )/2;

        i=j; 
        
    }

    cout<<ans<<endl;
    
    
    
    
    


    return 0;
}