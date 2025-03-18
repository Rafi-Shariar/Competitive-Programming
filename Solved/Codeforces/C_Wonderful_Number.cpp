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

//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

bool f2( string & s){

    int i=0, j = s.size() - 1;

    while (i<j)
    {
        if( s[i] != s[j]) return false;
        i++;
        j--;
    }

    return true;
    

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;

        if( n % 2 == 1){

            int bits [ 32 ] = {0};
            int last_idx ;

            for(int i=0; i<32; i++){

                if( ( n >> i ) & 1) {
                    bits[i] = 1;
                    last_idx = i ;
                }
            }

            string s; 

            for (int i = 0; i <= last_idx; i++)
            {
                if( bits[i]) s.push_back('1');
                else s.push_back('0');
            }


            if( f2(s)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

            
        }
        else cout<< "NO" <<endl;
    }
    

    return 0;
}