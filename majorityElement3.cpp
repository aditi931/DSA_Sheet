#include<bits/stdc++.h>
using namespace std;
/* Brute force
vector <int> majorityElement(int arr[], int n){
    vector <int > ans;
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[j]== arr[i])
            count++;
        }
        if(count> (n/3))
         ans.push_back(arr[i]);
    }
    return ans;
}*/
/*
//better approach

vector <int> majorityElement(int arr[], int n){
    unordered_map <int, int> mp;
    vector<int> ans;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second > (n/3))
        ans.push_back(x.first);
    }
    return ans;
}*/

//best approach
vector<int> majorityElement( int nums[], int n){
    int size =n;
    int i, num1 =-1, num2=-1, count1=0, count2=0;
    for(i=0; i< size; i++){
        if(nums[i]==num1)
         count1++;
        else if(nums[i]==num2)
         count2++;
         else if( count1==0){
             num1 = nums[i];
             count1 =1;
         } 
        else if( count2==0){
             num2 = nums[i];
             count2=1;
         }
        else{
             count1--;
             count2--;
         }
    }
    vector <int> ans;
    count1 = count2 =0;
    for(i=0;i<size; i++){
        if(nums[i]==num1)
        count1++;
        else if(nums[i]==num2)
         count2++;
    }
 if (count1 > size / 3)
    ans.push_back(num1);
  if (count2 > size / 3)
    ans.push_back(num2);
   return ans;
}

}