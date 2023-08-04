#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        int n,q;
        cin>>n>>q;

        printf("Case %d:\n",i);

        vector<int>v(n);
        for( int i=0; i<n; i++) cin>>v[i];

        while (q--)
        {
            char c;
            int x,y;
            cin>>c;

            if(c=='R') reverse(v.begin(),v.end());

            else if(c=='S'){
                cin>>x;
                for(int i=0; i<n; i++) v[i]+=x;
            }

            else if(c=='M'){
                cin>>x;
                for( int i=0; i<n; i++) v[i]*=x;
            }

            else if(c=='D'){
                cin>>x;
                for( int i=0; i<n; i++) v[i]/=x;
            }

            else if(c=='P'){
                cin>>x>>y;
                swap(v[x],v[y]);

            }

            
        }
        for(int i=0;  i<n-1; i++) cout<<v[i]<<" ";
            cout<<v[n-1]<<endl;

        

    }
    
    


    return 0;
}