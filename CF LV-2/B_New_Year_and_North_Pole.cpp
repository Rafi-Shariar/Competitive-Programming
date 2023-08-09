#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<pair<int,string>>arr(n);

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i].first>>arr[i].second;
    }

    int dis = 0, pos = 1;
    
    for(int i = 0; i < arr.size(); i++) {

        string tmp = arr[i].second;
        int val = arr[i].first;


        if(pos == 1 && tmp!= "South") {
            cout <<"NO"<< endl;
            return 0;
        }
        
        if(pos == 2 && tmp != "North") {
            cout<<"NO"<<endl;
            return 0;
        }
        
        if(tmp == "North")
            dis -= val ;
        
        if(arr[i].second == "South")
            dis += val;
        
        if(dis > 20000 || dis < 0) {
            cout<<"NO"<<endl;
            return 0;
        }

        //cout<<tmp<<" "<<dis<<"-->"<<pos<<endl;
        
        if(dis == 0) pos = 1;
        else if(dis == 20000) pos = 2;
        else pos = 3;
    }
    
    if(dis == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}