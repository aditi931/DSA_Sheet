#include<bits/stdc++.h>
using namespace std;

 string findPalind(string & str, int i, int j){
    int n= str.size();
    int left = i-1;
    int right=j+1;

    while(left>=0 && right<n && str[left]== str[right]){
        left--;
        right++;
    }
    left++;

    return str.substr(left, right-left);
 }

string longestPalindrome(string str){
    int n= str.size();
    string longest= "";

    for(int i=0;i<n;i++){
        string palind= findPalind(str, i,i);
        if(palind.size()> longest.size()){
            longest = palind;
        }
    }
    for(int i=0; i<n-1; i++){
        if(str[i]==str[i+1]){
          string palind=findPalind(str, i,i+1);
          if(palind.size()> longest.size()){
            longest= palind;
          }

        }
    }
    return longest;
}