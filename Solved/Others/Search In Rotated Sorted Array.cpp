
#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
int search(vector<int>&v, int n, int k)
{
   
    int low = 0, high = n-1;

    while(low <= high){

        int mid = low + (high-low) / 2;

        if( v[mid] == k) return mid;

        if( v[low] <= v[mid] ){

            if( v[low] <= k && k <= v[mid]) high = mid - 1;
            else low = mid + 1;
        }
        else{

            if( k >= v[mid] && k<= v[high] ) low = mid + 1;
            else high = mid - 1;
        }
    }

    return -1;



}
