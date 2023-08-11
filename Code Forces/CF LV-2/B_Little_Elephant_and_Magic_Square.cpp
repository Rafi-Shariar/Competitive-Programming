#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int arr[3][3];
    int n=3;

    int freq[100010]={0};
    
    for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
        cin>>arr[i][j];
        freq[arr[i][j]]++;
       }
    }

    for (int i = 1; i <=100000; i++)
    {
        
        int x = i + arr[0][1] + arr[0][2];
        int y = i + arr[1][0] + arr[2][0];

        if(x==y){

            int mid = x - arr[1][0] - arr[1][2];
            int last = x - arr[0][2] - arr[1][2];

            if(mid<=0 || last<=0) continue;

            arr[0][0] = i;
            arr[1][1] = mid;
            arr[2][2] = last;

            int d1 = arr[0][0] + arr[1][1] + arr[2][2];
            int d2 = arr[0][2] + arr[1][1] + arr[2][0];

            if(d1 != x || d2!=x) continue;

            break;
            
        }
    }

    for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
               cout<< arr[i][j]<<" ";  
             }
        cout<<endl;
}
    
    


    return 0;
}