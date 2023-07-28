#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        double a,b;
        cin>>a>>b;

        double c = sqrt( (a*a) + (b*b));

        double s = (a + b + c) / 2.0;

        double ans = sqrt(s*(s - a)*(s - b)*(s - c));

        printf("%.9lf\n", ans);
    }
    


    return 0;
}