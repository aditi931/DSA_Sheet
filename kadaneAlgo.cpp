#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums){
    int maxVal = nums[0], currSum =0;
    int const n = nums.size();
    for(int i=0;i<n;i++){
        currSum += nums[i];
        if(currSum> maxVal){
            maxVal=currSum;
        }
        if(currSum<0)
          currSum=0;
    }
    return maxVal;
}