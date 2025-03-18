#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool primecheck(int n){

    if(n==2 || n==3) return true;

    if(n%2==0 || n%3==0) return false;

    for (int i = 5; i*i <= n; i=i+6)
    {
        if(n%i == 0 || n % (i+2) == 0) return false;
    }

    return true;
    

}
int main(){

    vector<int>v;
    for (int i = 2; i <= 1000000; i++) if(primecheck(i)) v.push_back(i);

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        cout<<v[n-1]<<endl;
    }
    
    



   
    


    return 0;
}