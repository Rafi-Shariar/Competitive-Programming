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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
void fun(int n){

    if(n==0) return;
    
    fun(n/2);

    cout<< n%2;

    

}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin>>n;
        
        if( n == 0) cout << n << endl;
        else{
            
            fun(n);
            cout << endl;
        }
        
    }
    

    return 0;
}