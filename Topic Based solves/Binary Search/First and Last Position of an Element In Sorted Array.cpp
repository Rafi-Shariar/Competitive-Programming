#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0
pair<int, int> firstAndLastPosition(vector<int>&v, int n, int k)
{
    // Write your code here

    auto LB = lower_bound( v.begin(), v.end(), k) - v.begin();

    auto UB =  upper_bound( v.begin(), v.end(), k ) - v.begin();


    if( v[LB] != k){

        return make_pair(-1,-1);
    }
    else{

        return make_pair(LB , UB-1);
    }

}
