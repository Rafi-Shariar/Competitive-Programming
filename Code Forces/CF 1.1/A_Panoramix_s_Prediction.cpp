#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool prime_check(int n){

    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }

    return true;
}
int main(){

   int a,b;
   cin>>a>>b;

   if(prime_check(b)){

    for (int i = a+1; i <=b; i++)
    {
        if(prime_check(i)){

            if(i==b){
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    
   }
   else cout<<"NO"<<endl;


    


    return 0;
}