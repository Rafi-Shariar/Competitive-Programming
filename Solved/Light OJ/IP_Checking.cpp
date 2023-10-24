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

//https://lightoj.com/problem/ip-checking
int stringToInt(string& s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans = ans * 10 + (s[i] - '0');
    return ans;
} 

int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
}
int main()
{
    //fast

    int t=1;
    cin>>t;
    getchar();

    for(int tt=1; tt<=t; tt++)
    {
       string s,ip;
       cin >> s >> ip;

       vector<int>v;
       string tmp = "";

       for( int i=0; i <= s.size(); i++){

        if( s[i] == '.' || i == s.size()){

            int x = stringToInt( tmp );
            v.push_back(x);
            tmp = "";
        }
        else tmp.push_back(s[i]);

       }

       vector<int>ipp;
       

        for( int i=0; i <= ip.size(); i++){

        if( ip[i] == '.' || i == ip.size()){

            int x = stringToInt(tmp);
            int y = binaryToDecimal(x);

            ipp.push_back(y);

            tmp = "";

        }
        else tmp.push_back(ip[i]);

       }

       bool ok = true;

       for (int i = 0; i < 4; i++)
       {
         if( v[i] != ipp[i]) ok = false;
       }


       printf("Case %d: ", tt);


       if( ok ) cout << "Yes" <<endl;
       else cout << "No" <<endl;
       





        
    }
    

    return 0;
}