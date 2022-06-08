#include<bits/stdc++.h>
using namespace std;
//Brute force Approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int> left(n,0), right(n,0);
        int lmax=0;
        for(int i=0;i<n;i++){
            if(height[i]>=lmax)
                lmax=height[i];
            left[i]=lmax;
        }
        int rmax=0;
         for(int i=n-1;i>=0;i--){
            if(height[i]>=rmax)
                rmax=height[i];
            right[i]=rmax;
        }
        
        int res=0;
        for(int i=0;i<n;i++){
            res+=min(left[i], right[i])-height[i];
        }
        return res;
        
    }
};
//Optimal approach
int trap(vector<int> &height){
    int n=height.size();
    int left=0, right=n-1, res=0, maxl=0,maxr=0;
    while(left<= right){
        if(height[left]<=height[right]){
            if(height[left]>=maxl){
                maxl=height[left];
            }
            else{
                res+=maxl-height[left];
            }
            left++;
        }
        else if(height[left]>height[right]){
               if(height[right]>=maxr)
                maxr=height[right];
            }
            else{
                res+=maxr-height[right];
               
            }
             right--;
           
        
    }
     return res;
}