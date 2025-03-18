#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   double n,r; cin>>n>>r;

   double x,y; cin>>x>>y;
   double x1 = x, y1=y;

   double ans=0.0;
   
   for (int i = 1; i < n; i++)
   {
      double x2,y2; cin>>x2>>y2;

      ans += sqrt( pow ((x1-x2),2) + pow ((y1-y2),2) );

      x1 = x2;
      y1 = y2;

   }

    ans += sqrt( pow ((x1-x),2) + pow ((y1-y),2) );

    double rad = 2 * (3.1416) * r;

    ans += rad;

    printf("%.2lf\n",ans);

   

    


    return 0;
}