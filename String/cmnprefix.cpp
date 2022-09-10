#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs){
    string ans = "";
    string first = strs[0];

    for(int i=0;i<strs[0].size();i++ ){
        for(int j=1;j< strs.size(); j++){
            string temp = strs[j];
            if(temp[i]==first[i]){
                continue;
            }
            else
               return ans;
        }
        ans+=first[i];
    }
    return ans;
}