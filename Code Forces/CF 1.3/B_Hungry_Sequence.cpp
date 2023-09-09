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
    int c=0;

    for (int i = 2; c<n ; i++)
    {
        if(prime(i)){
            cout<<i<<" ";
            c++;
        }

    }
    
    
    
    


    return 0;
}