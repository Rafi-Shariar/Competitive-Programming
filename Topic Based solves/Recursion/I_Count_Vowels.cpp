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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
void count_vowel( string &s, int i, int &ans){

    if( i == s.size()) return;

    char v[] = {'a', 'e', 'i', 'o', 'u'};

    for (int x = 0; x < 5; x++)
    {
        if( s[i] == v[x]) ans++;
    }

    count_vowel(s, i+1, ans);
    



}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s;
        getline(cin, s);

        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i])) {

                s[i] = tolower(s[i]);
            }
        }

        int ans = 0;

        int i=0;

       count_vowel(s, i ,ans);

       cout << ans <<endl;

        
        
    }
    

    return 0;
}