#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,m,k;
   cin>>n>>m>>k;
   vector<int>v;
   bool pos = true;

   for (int i = 0; i < n*m; i++)
   {
     int a; cin>>a;

        v.push_back(a);
    
   }

    sort(v.begin(),v.end());

    int c = 0;

    int mid = (n*m)/2;
    int val = v[mid];

    for (int i = 0; i < n*m; i++)
    {
        if(i==mid) continue;
        else
        {
            int cur = abs(val - v[i]);
            c += cur/k;

            if(cur % k != 0){
                cout<<-1<<endl;
                return 0;
            }
        }
        
    }

    cout<<c<<endl;

    
   
   
   
    


    return 0;
}