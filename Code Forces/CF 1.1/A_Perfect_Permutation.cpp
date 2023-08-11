#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v;

    if(n & 1){
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        for (int i = n; i >=1; i--)
        {
            v.push_back(i);
        }

        // if(n&1){
        //     int idx = n/2;
            
        //     swap(v[idx],v[idx+1]);
        // }

        for(auto i : v) cout<<i<<" ";
        cout<<endl;
        
       
    }
    
    


    return 0;
}