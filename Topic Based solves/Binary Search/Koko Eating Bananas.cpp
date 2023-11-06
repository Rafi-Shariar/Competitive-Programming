#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/minimum-rate-to-eat-bananas_7449064?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM
long long int time(vector<int>v, int cur){

    long long int total_time = 0;

    for(int i = 0; i < v.size(); i++) total_time += ceil((double)(v[i]) / (double)(cur));


    return total_time;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here

    sort(v.begin(), v.end());

    int low = 1, high = v[ v.size() - 1];

    while(low <= high){

        int mid = low + (high - low)/2;

        if( time(v,mid) <= h){

            high = mid - 1;
        }
        else{
            low = mid + 1;

        }
    }

    return low;



}
// binary search on answers