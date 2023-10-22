#include<bits/stdc++.h>
using namespace std;

//https://www.codingninjas.com/studio/problems/search-in-a-rotated-sorted-array-ii_7449547?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool searchInARotatedSortedArrayII(vector<int>&v, int key) {
    // Write your code here.

    int low = 0, high = v.size() - 1;

    while( low <= high ){

        int mid = low + ( high - low) / 2;

        if( v[mid] == key) return true;

        if( v[low] == v[mid] && v[mid] == v[ high]){
            low++;
            high--;
            continue;
        }

        if( v[low] <= v[mid]){

            if( v[low] <= key && key <= v[mid]) high = mid - 1;
            else low = mid + 1;
        }
        else{

            if( v[mid] <= key && key <= v[high]) low = mid + 1;
            else high = mid - 1;
        }
    }

    return false;
    
}
