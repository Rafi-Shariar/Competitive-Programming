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

//https://vjudge.net/contest/600885#problem/Z
void words(string s, string &a, string &b){

	int flag = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if( s[i] == ' '){
            flag = 1;
            continue;
        }

		if(flag == 0) a += s[i];
		else b += s[i];
	}

}
int main()
{
    fast

    string s,a,b;
    map<string,string>mp;

    while(getline(cin,s)){

    	if( s == "") break;
    	words(s,a,b);
    	mp[b] = a;

       

        a=""; b="";

    }

    

    string q;

    while( cin >> q){

        if( mp.find(q) != mp.end()) cout << mp[q] << endl;
        else cout << "eh" << endl;
       
    }



    return 0;
}