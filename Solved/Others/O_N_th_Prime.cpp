#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

const int N=90000001;
bool marked[N+5];
vector<int>v;

void seive(){

    marked[0]=marked[1]=true;
    v.push_back(2);
    for( int i=4; i<N; i+=2) marked[i]=true;

    for( int i=3; i<=N; i+=2){

        if(!marked[i]){
            v.push_back(i);
            
            if(i<=sqrt(N)){

                for (int j = i*i; j <= N; j+=i*2) marked[j]= true;
                
            }
        }
    }
}


int main()
{
    fast

    int t=1;
    //cin>>t;

    seive();

    while (t--)
    {
        int n; cin >> n;
        cout << v[n-1] << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  04-February-2024  00:42:24
*/ 
 