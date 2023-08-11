#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool prime(int num){

   if (num <= 1) {
        return false;
    }

    if (num <= 3) {
        return true;
    }

    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
    
}

int main(){

  int n; cin>>n;
  vector<int>v;
  int ans[n]={0};
  int k=1;

  for (int i = 0; i < n; i++)
  {

     if(prime(i+2)){
        ans[i]=1;
     }
     else{
        ans[i]=2;
        k=2;
     }
       
  }

  cout<<k<<endl;
  for(auto i : ans) cout<<i<<" ";
  cout<<endl;





 
  
    
  



  
  
    


    return 0;
}