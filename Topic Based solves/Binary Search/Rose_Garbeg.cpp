#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM
bool pos(vector<int>v, int mid, int k, int m){

	int c = 0;

	int ans = 0;

	for(int i=0; i< v.size(); i++){

		if( mid >= v[i] ) c++;
		else{

			ans += (c/k);
			c=0;
		}

	}

	ans += (c/k);

	
	//cout << ans << endl;

	if( ans >= m) return true;
	else return false;

}
int roseGarden(vector<int> v, int k, int m)
{
	if( (k*m) > v.size()) return -1;

	int mx = *max_element(v.begin(), v.end());
	int mn = *min_element(v.begin(), v.end());


	int low = mn, high = mx;

	int ans = mx;

	while(low <= high){

		int mid = low + (high - low) / 2;

		if( pos(v,mid,k,m) ){

			ans = min(ans,mid);

			high = mid - 1;
		}
		else low = mid + 1;


	} 

	return ans;
}