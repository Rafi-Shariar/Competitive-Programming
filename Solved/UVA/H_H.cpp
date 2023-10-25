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

    ll a , b , c ;
    while(cin >> a >> b >> c){

        if( a == 0 && b == 0 && c == 0) break;


     a = a * a;
     b = b * b;
     c = c * c; 

     if( ( a + b) == c ) cout << "right" <<endl;
     else if( ( a + c ) == b ) cout << "right" << endl;
     else if ( ( b + c ) == a) cout << "right" << endl;
     else cout << "wrong" <<endl;

    }
    
    




    


    return 0;
}