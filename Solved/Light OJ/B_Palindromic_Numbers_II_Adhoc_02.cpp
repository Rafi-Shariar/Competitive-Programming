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

//https://lightoj.com/problem/palindromic-numbers-ii
bool palindrome( string s){

    int i = 0 , j = s.size()-1;

    while (i<j)
    {
       if( s[i] != s[j]) return false;
       i++;
       j--;
    }

    return true;
    
}
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        string s; cin >> s;

        printf("Case %d: ",tt++);

        if( palindrome(s) ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  22-January-2024  20:07:38
*/ 
 