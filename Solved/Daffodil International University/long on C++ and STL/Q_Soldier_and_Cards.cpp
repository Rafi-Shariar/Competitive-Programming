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


//https://vjudge.net/contest/600885#problem/Q

int fac(int n){

	if( n==0 || n==1 ) return 1;

	return n*fac(n-1);

}
int main()
{
	int crds; cin >> crds;

	int n; cin >> n;
	deque<int>a;

	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		a.push_back(x);
	}


	int m; cin >> m;
	deque<int>b;

	for (int i = 0; i < m; ++i)
	{
		int x; cin >> x;
		b.push_back(x);
	}

	int mx = fac(crds);
	int c=0;

	while(true){

		if( a.empty() ){
			cout << c << " " << 2 << endl;
			break;
		}


		if( b.empty()){
			cout << c << " " << 1 << endl;
			break;
		}

		int aa = a.front();
		int bb = b.front();

		if( a > b ){

			a.pop_front();
			b.pop_front();
			a.push_back(bb);
			a.push_back(aa);
			c++;
		}
		else{

			a.pop_front();
			b.pop_front();
			b.push_back(aa);
			b.push_back(bb);
			c++;
		}


		if( c > mx){
			cout << -1 << endl;
			break;
		}



	}


    return 0;
}