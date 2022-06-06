#include<bits/stdc++.h>
using namespace std;

class Solution{
 public:
    int majorityElement (vector<int> &nums){
        int count =0;
        int candidate=0;
        for(int n: nums){
            if(count ==0)
             candidate=n;
             if(n==candidate)
             count+=1;
             else
             count-=1;
        }
        return candidate;
    } 
};