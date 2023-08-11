#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int cst,money,n;
    cin>>cst>>money>>n;
 
    int bananas = (n*(n+1) )/2;
 
    bananas = bananas * cst;
 
    int borrow = bananas - money;
 
    if(borrow<=0) borrow=0;
 
    cout<<borrow<<endl;
 
 
    return 0;
}