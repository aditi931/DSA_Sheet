#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> str;
    for(int i=0; s[i]!='\0'; i++){
        if(str.empty()){
            str.push(s[i]);
             continue;
        }

        if(s[i]==')' && str.top()='(') str.pop();
        else if(s[i]=='}' && str.top()='{') str.pop();
        else if(s[i]==']' && str.top()='[') str.pop();

        else{
            str.push(s[i]);

        }
    }
    return str.empty();
}