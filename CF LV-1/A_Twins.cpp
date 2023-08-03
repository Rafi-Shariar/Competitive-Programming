#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    vector<int>v(n+1);
    int sum=0;
    

    for(int i=1; i<=n; i++){
        cin>>v[i];
        sum += v[i];
    }

    sort(v.begin(),v.end());

    int half = sum/2;

    int cur=0;
    int c=0,i=n;

    while (cur<=half)
    {
        cur += v[i];
        c++;
        i--;
        
    }

    //cout<<cur<<endl;

    cout<<c<<endl;
    
    

  

    


    


  
    


    

    


    return 0;
}