#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int l0=0,l1=0,r0=0,r1=0;

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;

        if(a==1) l1++;
        else l0++;

        if(b==1) r1++;
        else r0++;
    }

    int t1 = min(r1,r0);
    t1 += min(l1,l0);

    cout<<t1<<endl;
    
    


    return 0;
}