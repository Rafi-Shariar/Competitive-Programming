#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check_lucky(int n){

     while (n)
    {
        int x = n%10;
        if(x!=4 && x!=7)
            return false;

        n/=10;
    }

    return true;


}
int main(){

    int n; cin>>n;

    bool ok = check_lucky(n);

    if(!ok){

        for (int i = 4; i <= n; i++)
        {
            if(n%i==0){
                bool is = check_lucky(i);

                if(is){
                    ok = true;
                    break;
                }
            }

            
        }
        
    }

    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    


    return 0;
}