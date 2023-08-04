#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin>>t;
    
    for(int x=1; x<=t; x++){
        
        int n, p,q;
        cin>>n>>p>>q;
        
        printf("Case %d: ",x);
        
        vector<int>v(n);
        
        for(int i=0; i<n; i++) 
            cin>>v[i];
        
        sort(v.begin(), v.end());
        
        int c=0;
        int sum=0;
        
        for(int i=0; i<p && i<n; i++){
            
            sum += v[i];
            
            if(sum<=q) c++;
        }
        
        
        cout<<c<<endl;
        
    }
}