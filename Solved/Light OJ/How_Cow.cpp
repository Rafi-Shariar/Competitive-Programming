#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <=t; i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        int n; cin>>n;

        printf("Case %d:\n",i);

        while (n--)
        {
            int a,b;
            cin>>a>>b;

            if( (a>=x1 && a<=x2) && (b>=y1 && b<=y2)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
        
    }
    
    


    return 0;
}