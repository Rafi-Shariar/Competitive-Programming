#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

   for (int i = 1; i <= t; i++)
   {
    
    ll a,b,c;
    cin>>a>>b>>c;
    

    if( (a*a) + (b*b) == c*c) printf("Case %d: yes\n",i);
    else if ( (a*a) + (c*c) == b*b) printf("Case %d: yes\n",i);
    else if ( (b*b) + (c*c) == a*a) printf("Case %d: yes\n",i);
    else printf("Case %d: no\n",i);

    


     
   }
   


    return 0;
}