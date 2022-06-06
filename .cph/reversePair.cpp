#include<bits/stdc++.h>
using namespace std;

int reversePairs(vector <int> &arr){
    int pairs =0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]> 2* arr[j]) pairs++;
        }
    }
    return pairs;
}