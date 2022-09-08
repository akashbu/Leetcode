#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main(){      
    
    vector<int> nums = {1,2,3,1};
    map<int,int> map1;

    for(int i=0; i<nums.size(); i++){
        int c = count(nums.begin(), nums.end(),nums[i]);
        if(map1.find(i)!=map1.end()){
            continue;
        }
        if(c>=2){
            map1[i] = c;
        }
    }

    if(!map1.empty()){
        cout<<"True";
    }
}
