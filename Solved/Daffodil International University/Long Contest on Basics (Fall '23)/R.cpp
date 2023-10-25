#include<bits/stdc++.h>
using namespace std;
//https://vjudge.net/contest/589783#problem/R
int main(){

	int n; cin >> n;

	int cur = 0;


	for( int i = 1; i<= 1001; i++){

		int need = (i * ( i+1) )/ 2 ;

		if( n >= need){
			cur++;
			n -= need;
		}
		else break;

	}

	cout << cur << endl;

	return 0;
}