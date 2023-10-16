#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    vector<double>v;

    ll a;

    while (cin>>a)
    {
        v.push_back( sqrt(a));
    }

    for (int i = v.size()-1; i >=0; i--)
    {
        printf("%.4lf\n",v[i]);
    }
    
    
    

    


    return 0;
}