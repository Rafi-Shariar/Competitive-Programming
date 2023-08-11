#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

        vector<pair<int,int>>v;

        for (int i = 0; i < t; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }

        int c=0;

        for (int i = 0; i < t; i++)
        {

            int x=v[i].first , y = v[i].second;
            int u=0,d=0,l=0,r=0;
            //cout<<x<<" "<<y<<" --> ";

            for (int j = 0; j < t; j++)
            {
                if(j==i) continue;

                int a = v[j].first , b = v[j].second;
                //cout<<a<<" "<<b<<endl;

                if(a>x && b==y) r = 1;
                if(a<x && b==y) l = 1;
                if(a==x && b<y) d = 1;
                if(a==x && b>y) u = 1;

            }

            if(r==1 && l==1 && d==1 && u==1) c++;

        }

        cout<<c<<endl;

        
        
    
    


    return 0;
}