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

//http://surl.li/opkat
// B.S on answers, ans lies within the maximum element and the sum of all element

int check( int mid, vector<int>v){

	int sum = 0, c = 1;

	for (int i = 0; i < v.size(); i++)
	{
		if( sum + v[i] > mid){
			c++;
			sum = v[i];
		}
		else sum += v[i];
	}


	return c;
	

}
int weights(vector<int>v, int d){

    int t = 0;
	for (int i = 0; i < v.size(); i++)
	{
	    t += v[i];
	}


	int low = *max_element(v.begin(), v.end());
	int high = t;

	int ans = t;

	while ( low <= high)
	{
		int mid = low + (high - low )/2;

		int c = check(mid , v);

		if( c <= d) high = mid - 1;
		else low = mid + 1;
	}

	 return low;
	 
	
}
int main()
{
	fast

	int t=1;
	//cin>>t;

	while (t--)
	{
		vector<int>v = {5, 4, 5, 2, 3, 4, 5, 6};
		int d = 5;

		cout << weights(v,d);

		
	}
	

	return 0;
}