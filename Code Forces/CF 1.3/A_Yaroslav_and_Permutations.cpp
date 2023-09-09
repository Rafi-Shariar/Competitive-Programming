#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(),v.end());

    int mx=INT_MIN; 
    int c=1;
    

    for (int i = 0; i < n-1; i++)
    {
       if(v[i]==v[i+1]){
        c++;
        mx = max(mx,c);
       }
       else c=1;
    }

    if( mx <= (n+1)/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    


    return 0;
}