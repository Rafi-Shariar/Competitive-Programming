#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0

int count(vector<int>&v, int n, int x) {
	// Write Your Code Here

	auto LB = lower_bound( v.begin(), v.end(), x) - v.begin();

	if( LB == n) return 0;

	auto UB = upper_bound( v.begin(), v.end(), x) - v.begin();
	UB--;

	return (UB - LB)+1;

}
