#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

   for (int i = 1; i <= t; i++)
   {
     int r1,c1,r2,c2;
     cin>>r1>>c1>>r2>>c2;

    //  int x=r1+c1, y = r2+c2;
    int x=0,y=0;

    if( (r1&1)==(c1&1)) x=1;
    if( (r2&1)==(c2&1)) y=1;

     printf("Case %d: ",i);

     if( x==y ){

        int rr = abs(r1 - r2);
        int cc = abs(c1 - c2);

        if(rr==cc) cout<<1<<endl;
        else cout<<2<<endl;
     }
     else cout<<"impossible"<<endl;



     //(x%2==0) && (y%2==0)

   }
   
    


    return 0;
}