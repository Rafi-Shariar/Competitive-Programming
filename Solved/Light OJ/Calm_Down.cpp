#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    double pi = 2 * acos(0.0);

    for (int i=1; i<=t; i++)
    {
        double r,n;
        cin>>r>>n;

        double ans = (sin(pi/n) * r )/ (1 + sin(pi/n));

        printf("Case %d: %.10lf\n",i,ans);

        
    }
    


    return 0;
}