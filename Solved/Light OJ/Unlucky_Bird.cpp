#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i=1; i<=t; i++)
    {
        double v1,v2,v3,a1,a2;
        cin>>v1>>v2>>v3>>a1>>a2;

        double t1 = v1/a1;
        double t2 = v2/a2;

        double T = max(t1,t2);

        double dis_bird = v3 * T;

        double dis_train1 = (v1*t1) - 0.5 * a1 * (t1*t1); 
        double dis_train2 = (v2*t2) - 0.5 * a2 * (t2*t2);

        double total_dis = dis_train1 + dis_train2;

        printf("Case %d: %.10lf %.10lf\n",i,total_dis, dis_bird); 
    }
    


    return 0;
}