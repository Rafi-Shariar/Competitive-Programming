#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int freq[4]={0};
    int c=0;

    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;

        if(a==4) c++;
        else freq[a]++;
    }

    if( freq[3] <= freq[1]){
        c += freq[3];
        freq[1] -= freq[3];
        freq[3] = 0;

    }
    else
    {
        c+= freq[1];
        freq[3] -= freq[1];
        freq[1] = 0;
    }

    if(freq[3]>0) c+= freq[3];

    int res = (freq[2]*2) + freq[1];

    if(res%4==0) c += res/4;
    else c+= (res/4) + 1;

    cout<<c<<endl;
     
    



    return 0;
}