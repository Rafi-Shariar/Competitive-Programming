#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif



int main()
{

    char arr[100];
    scanf("%s",arr);
    int len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        ch++;
        printf("%c",ch) ;
    }

    cout << endl;
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  31-January-2024  12:13:49
*/ 
 