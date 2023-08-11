#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll s1,s2,s3;
   cin>>s1>>s2>>s3;

   //ll s1 = a*b , s2 = b*c, s3 = c*a;

   ll x = sqrt( (s1*s3)/s2);
   ll y = sqrt( (s1*s2)/s3);
   ll z = sqrt ( (s2*s3)/s1);

   ll i = x+y+z;
   cout<<4 * i<<endl;
    


    return 0;
}