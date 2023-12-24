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

//https://vjudge.net/contest/600885#problem/L
bool check(char a, char b) {

    if( a == '{' && b == '}') return true;
    if( a == '[' && b == ']') return true;
    if( a == '(' && b == ')') return true;

    return false;
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        string s; cin >> s;

        deque<char>dq;
        int flag = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];

            if( ch == '{' || ch == '[' || ch == '(') dq.push_back(ch);
            else
            {
                if( dq.empty() || !check( dq.back(), ch) ){

                    flag = 1;
                }
                else
                {
                    dq.pop_back();
                }
                
            }
            
        }


       if( flag || !dq.empty()) cout << "NO" << endl;
       else cout << "YES" << endl;
        

        
    }
    

    return 0;
}