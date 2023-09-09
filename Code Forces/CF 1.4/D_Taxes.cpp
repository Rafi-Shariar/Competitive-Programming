#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool prime(int num){

   if (num <= 1)return false; 
   if (num <= 3) return true;
   if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
    
}


int main(){

   int n; cin>>n;

   if( prime(n)) cout<<1<<endl;
   else if( n%2==0) cout<<2<<endl;
   else if( prime(n-2)) cout<<2<<endl;
   else cout<<3<<endl;
   

    


    return 0;
}