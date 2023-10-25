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

//https://vjudge.net/contest/589783#problem/T
void pre( map<char,int>&mp){

	mp['a'] = 1; mp['b'] = 2; mp['c'] = 3;
	mp['d'] = 1; mp['e'] = 2; mp['f'] = 3;
	mp['g'] = 1; mp['h'] = 2; mp['i'] = 3;
	mp['j'] = 1; mp['k'] = 2; mp['l'] = 3;
	mp['m'] = 1; mp['n'] = 2; mp['o'] = 3;
	mp['p'] = 1; mp['q'] = 2; mp['r'] = 3;
	mp['s'] = 4; mp['t'] = 1; mp['u'] = 2;
	mp['v'] = 3; mp['w'] = 1; mp['x'] = 2;
	mp['y'] = 3; mp['z'] = 4;
}
int main(){


	int t; cin >> t;
	getchar();

	map < char , int > mp;
	pre(mp);

	for(int tt=1; tt<=t; tt++){

		string s; getline( cin , s);

		int c = 0;

		for( int i = 0; i<= s.size(); i++ ){

			if( s[i] == ' ') c += 1;
			else c += mp[s[i]];

		}

		printf("Case #%d: %d\n",tt,c);



	}


	return 0;
}