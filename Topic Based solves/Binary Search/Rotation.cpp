#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0
int findKRotation(vector<int> &v){
    // Write your code here.    

    int low = 0, high = v.size() - 1;

    int idx = 0;
    int minn = INT_MAX;

    while( low <= high){

        int mid = low + ( high - low) / 2;

        if( v[low] <= v[high]){

            if( v[low] < minn){
                idx = low;
            }

            break;
        }

        if( v[low] <= v[mid]){

            if( v[low] < minn){
                minn = v[low];
                idx = low;
            }

            low = mid + 1; 
        }
        else{

            if( v[mid] < minn){
                minn = v[mid];
                idx = mid;
            }

            high = mid - 1;
        }

    }

    return idx;

}
/*
find the minimum value of the array, the index of the minimum value is the ans
*/