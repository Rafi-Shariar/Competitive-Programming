#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/rotated-array_1093219
int findMin(vector<int>&v)
{

	int low = 0, high = v.size() - 1;

	int ans = INT_MAX;

	while( low <= high){

		int mid = low + ( high - low )/2;

		if( v[low] <= v [ mid]){
			ans = min( ans, v[low]);
			low = mid + 1;
		}
		else{

			ans = min ( ans , v[mid]);
			high = mid - 1;
		}


	}

	return ans;

}
/*
 if left side is sorted we store the min of that side : v [ low ] & element left side
 else we store the min of right side : v [ mid ] and & element the right side
*/
