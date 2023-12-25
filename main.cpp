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


char lower( char ch){

	if( ch >='A' && ch <= 'Z') return (ch+32);
}
int main()
{
	fast

	set<string>st;
	string s;

	while (cin >> s)
	{
		string tmp = "";

		for (int i = 0; i < s.size(); i++)
		{
			char ch = lower( s[i] );

			if( ch >= 'a' && ch<='z') tmp.push_back(ch);
			
		}
		
	}
	
	

	return 0;
}