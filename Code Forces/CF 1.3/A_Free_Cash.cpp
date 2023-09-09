#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    int arr[25][61]={0};

    while (t--)
    {
        int a,b;
        cin>>a>>b;

        arr[a][b]++;
    }

    int c = 0;

    for (int i = 0; i <= 24; i++)
    {
        for (int j = 0; j <= 60; j++)
        {
            c = max(c,arr[i][j]);
        }
        
    }

    cout<<c<<endl;
    
    


    return 0;
}