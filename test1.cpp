#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
     char string[20];
int length,flag=0,t;
cin>>string;
length=strlen(string);
for(int i=0; i<length; i++){
if(string[i] !=string[length-i-1]){
    flag=1;
    break;
}
}
if(flag){
    cout<<"No"<<endl;
}else{
    cout<<"Yes";
}
}
    return 0;
}