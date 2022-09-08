#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr1 = {7,1,5,3,6,4};
    int max_profit = 0;
    int min =*min_element(arr1.begin(), arr1.end());

    for(int i=0; i< arr1.size(); i++){
        if(arr1[i] == min){
            for(int j= i+1; j<arr1.size(); j++){
                if((arr1[j]-min) > max_profit){
                    max_profit = arr1[j] - min;
                }
            }
        }
    }

    cout<<max_profit;
}
