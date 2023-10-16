#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://acm.timus.ru/problem.aspx?space=1&num=1014
int main(){

    ll n;
    cin>>n;
    int arr[] ={9,8,7,6,5,4,3,2};
    int i=0;
    bool pos = true;
    vector<int>v;

   if(n == 1) {
        printf("1\n");
        return 0;
    } else if(n == 0) {
        printf("10\n");
        return 0;
    }

    while (n>1 && i<8)
    {
        if(n % arr[i]==0){

            v.push_back(arr[i]);
            n /= arr[i];
        }else
        {
            i++;
        }

        // if(i==8 && n!=1){
        //     pos = false;
        // }
        
    }

    
    if(n!=1) pos = false;

    if(!pos) cout<<-1<<endl;
    else
    {
        // for(auto i : v) cout<<i;
        for (int i = v.size()-1; i >= 0; i--)
        {
            cout<<v[i];
        }
        
       cout<<endl;
    }


    

    return 0;
}