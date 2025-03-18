#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    double pi = 2.0 * acos(0.0);

    for (int i=1; i<=t; i++)
    {
        double r; cin>>r;
        double sqr_Area = (r+r)*(r+r);
        double cir_area = (pi)*(r*r);


        printf("Case %d: %.2lf\n",i,(sqr_Area-cir_area));
    }
    


    return 0;
}