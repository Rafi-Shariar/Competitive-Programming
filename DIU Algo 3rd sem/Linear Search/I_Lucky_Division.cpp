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

//https://vjudge.net/contest/575132#problem/I
bool check_lucky(int n){

     while (n)
    {
        int x = n%10;
        if(x!=4 && x!=7)
            return false;

        n/=10;
    }

    return true;


}
int main(){

    fast

    int n; cin>>n;

    bool ok = check_lucky(n);

    if(!ok){

        for (int i = 4; i <= n; i++)
        {
            if(n%i==0){
                bool is = check_lucky(i);

                if(is){
                    ok = true;
                    break;
                }
            }

            
        }
        
    }

    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    


    return 0;
}
/*
Author: Rafi Shariar
Created:  01-February-2024  21:50:15
*/ 
 