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

//https://lightoj.com/problem/hidden-secret
 string convert(string &s){

    string ans;

    for(int i=0; i<s.size(); i++){

        if(s[i]>='A' && s[i] <= 'Z'){ char ch = s[i] + 32; ans.push_back(ch);}
        else if( s[i]==' ') continue;
        else ans.push_back(s[i]);

    }

    return ans;
}
int main()
{
    //fast

    int t=1;
    cin>>t;
    getchar();

    for(int tt = 1; tt <=t; tt++)
    {

        string a,b;
        getline(cin,a);
        getline(cin,b);

        a = convert(a);
        b = convert(b);

        // cout<<a << " "<< b <<endl;

        sort(a);
        sort(b);

        printf("Case %d: ",tt);

        if(a == b) cout<< "Yes" <<endl;
        else cout<< "No" <<endl;

        


        
    }
    

    return 0;
}