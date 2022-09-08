#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr1 = {3,2,4};
    int target = 6;
    vector<int> final;

    for(int i=0; i<arr1.size(); i++){
        for(int j=i+1; j<arr1.size(); j++){
            if((arr1[i] + arr1[j]) == target ){
                final.push_back(i);
                final.push_back(j);
            }
        }
    }


    for(int i=0; i<final.size();i++){
        cout<<final[i]<<" ";
    }
}

  //Optimised to O(n)

        // vector<int> ans;
        // unordered_map<int,int> mp;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     int se = target-nums[i];
        //     if(mp.find(se) != mp.end())
        //     {
        //         ans.push_back(mp[se]);
        //         ans.push_back(i);
        //         return ans;
        //     }
        //     else
        //         mp[nums[i]] = i;
        // }
        // return ans;