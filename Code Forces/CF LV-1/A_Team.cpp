#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    int n; scanf("%d",&n);
    int count=0;
    int a,b,c;
 
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if ((a+b+c)>1)
    {
        count++;
    }
   
    }
     printf("%d", count);
    


    return 0;
}