#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> nums1, int m, vector<int> nums2, int n){
    vector<int> mergedList;
    int i=0,j=0;
    while(i<m && j<n){
        if(nums1[i]<= nums2[j]){
            mergedList.push_back(nums1[i]);
            ++i;
        }
        else{
            mergedList.push_back(nums1[j]);
            ++j;
        }
    }
    while(i<m){
         mergedList.push_back(nums1[i]);
            ++i;
    }
    while(j<n){
         mergedList.push_back(nums1[j]);
            ++j;
    }
    nums1=mergedList;
}