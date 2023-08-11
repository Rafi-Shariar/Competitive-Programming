#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        int odd=0, even =0;
        vector<int>od;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];

            if(v[i]%2==0) even = i + 1;
            else
            {
                if(od.size()<=2) od.push_back(i+1);
            }
            
        }

        if(even > 0 ){
            cout<<1<<endl<<even<<endl;

        }
        else if( od.size()>=2){
            cout<<2<<endl;
            cout<<od[0]<<" "<<od[1]<<endl;
        }
        else cout<<-1<<endl;

     

      
    }
    


    return 0;
}