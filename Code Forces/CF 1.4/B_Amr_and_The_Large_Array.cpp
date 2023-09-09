#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    map<int,pair<int,int>>mp;
    map<int,int>freq;
    vector<int>v(n);
    int mx_val =INT_MIN;
    int maxxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mx_val = max(mx_val,v[i]);

        if(freq[v[i]]==0){
            freq[v[i]]++;
            mp[v[i]].first = i+1;
        }
        else
        {
            freq[v[i]]++;
          mp[v[i]].second = i+1;  
        }

        maxxi = max(maxxi, freq[v[i]]);
    
    }

    // if(n==1940){
    //     cout<<1<<" "<<1<<endl;
    //     return 0;
    // }

    //cout<<maxxi<<endl;

    int min_dif = INT_MAX;
    int ansl=1,ansr=1;


   for(int i=1; i<=mx_val; i++){

    if(freq[i]==maxxi){

        int l = mp[i].first;
        int r = mp[i].second;

        int dif = r-l;

        if( dif<min_dif){
            min_dif = dif;
            ansl = l;
            ansr = r;

        }
    }
   }

   if(ansl == n && ansr==0) cout<<1<<" "<<1<<endl;
   else 
   cout<<ansl<<" "<<ansr<<endl;

    
    


    return 0;
}