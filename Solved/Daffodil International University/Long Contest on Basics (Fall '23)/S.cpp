#include<bits/stdc++.h>
using namespace std;

//https://vjudge.net/contest/589783#problem/S
bool prime( int n){

	if( n <= 1) return false;
	if( n <= 3) return true;
	if( n % 2 == 0 || n % 3 == 0 ) return false;

	for( int i = 5; i*i <= n; i += 6){

		if( n % i == 0 || n % ( i + 2) == 0) return false;
	}

	return true;
}
int main(){

	int n; cin >> n;


	for( int i = 4; i <= n; i++ ){

		if( !prime(i) && !prime( n - i)){
			cout << i << " " << n - i << "\n";
			return 0;
		}

	}



	return 0;
}