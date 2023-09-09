#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    vector<pair<int,int>>v(n);
    int st = 0 , se=0;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
        st+=v[i].first;
        se += v[i].second;
    }

    if( st %2==0 && se%2==0){
        cout<<0<<endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int tt = st , te = se;

        tt -= v[i].first;
        te -= v[i].second;
        tt += v[i].second;
        te += v[i].first;

        if(tt%2==0 && te%2==0){
            cout<<1<<endl;
            return 0;
        }

       
        
    }

    cout<<-1<<endl;
    
    
    


    return 0;
}