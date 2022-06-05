#include<bits/stdc++.h>
using namespace std;
/*Mathematical approach*/
vector <int> missing_repeated_number( const vector <int> &A){
    long long int len = A.size();
    long long int S = (len*(len+1))/2;
    long long int P = (len*(len+1)*(2*len+1))/6;
    long long int missNum=0, repeatNum=0;

    for(int i=0;i<A.size();i++){
        S= (long long int)A[i];
        P= (long long int)A[i]* (long long int)A[i];
    }
    missNum = (S+P)/2;
    repeatNum = missNum-S;
    vector<int> ans;
    ans.push_back(repeatNum);
    ans.push_back(missNum);
    return ans;
}