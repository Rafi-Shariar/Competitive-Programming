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
    vector<int>v(n);
    forin(v,n);

    int x; cin >> x;
    v.erase(v.begin() + (x-1));

    int a,b; cin >> a >> b;

    v.erase(v.begin()+(a-1), v.begin()+(b-1));

    cout << v.size() << endl;

    for(auto i : v) cout << i << " ";
    cout << endl;


    

    return 0;
}