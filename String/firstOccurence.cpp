#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle){
    if(needle.size()> haystack.size()){
        return -1;
    }

    for(int i=0; i<= (haystack.size()- needle.size()); i++){
        if(haystack [i]== needle[0]){
            string tmp= haystack.substr(i,needle.size());
            if(tmp== needle)
               return i;
        }

    }
    return -1;
}