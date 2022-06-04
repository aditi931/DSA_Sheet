#include<bits/stdc++.h>
using namespace std;

class Solution{
public:   
   void sortColors(vector <int> & nums) {
        int c=0,d=0,e=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                c++;
            if(nums[i]==1)
                d++;
            if(nums[i]==2)
                e++;
        }
       int i=0;
        while(i!= nums.size()){
            if(i<c) nums[i]=0;
            else if(i<c+d) nums[i]=1;
            else nums[i]=2;
            i++;
        }
   }   
    };