#include<bits/stdc++.h>
using namespace std;

vector <vector< int>> merge( vector<vector< int>> &intervals){
    sort(intervals.begin(), intervals.end());
    vector<vector <int>> merged;
    for(int i=0; i<intervals; i++){
         if(merged.empty() || merged.back()[1] < intervals[i][0]){
             vector<int> v={
                 intervals[i][0],
                 intervals[i][1]
             };
             merged.push_back(v);
         }
         else{
             merged.back()[1]=max(merged.back()[1], intervals[i][0]);
         }
    }
return merged;
}