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

void evens(int n){

     for (int i = 3; i < n ; i+=2)
    {
        int res = n - i;

        if(prime(res) && prime(i)){
            cout<<res<<" "<<i<<endl;
            break;
        }

    }

}

int main(){

   int n; cin>>n;

   if(prime(n)) cout<<1<<endl<<n<<endl;
   else if( n%2==0){

    cout<<2<<endl;

    evens(n);
    
   }
   else
   {
    cout<<3<<endl;
    int res;
       for (int i = 3; i <n; i+=2)
       {
           res = n - i;

          if(res%2==0 && prime(i)){
            cout<<i<<" ";
            break;
          }
       }

       evens(res);
       
   }
   

    


    return 0;
}