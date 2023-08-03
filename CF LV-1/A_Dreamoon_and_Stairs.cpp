#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int a,b;
    cin>>a>>b;

    int h;
    if(a&1) h = a/2 + 1;
    else h = a/2;

    for (int i = h; i <= a; i++)
    {
        if(i%b==0){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;
    
    


    return 0;
}