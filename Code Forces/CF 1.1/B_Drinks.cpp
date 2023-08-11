#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    double sum=0;

    for (int i = 0; i < n; i++)
    {
        double a; cin>>a;
        sum += a;

    }

    double t = n*100.00;

    double ans = sum/t;

    printf("%.12lf\n",ans*100.00);
    
    


    return 0;
}