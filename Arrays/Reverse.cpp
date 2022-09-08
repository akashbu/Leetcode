#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse_string(vector<char> s){
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}

int main(){
vector<char> s = {'h','e','l','l','o'};
reverse_string(s);

}

