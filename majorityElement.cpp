#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n;
        // int i;
        // while(i<n){
        //     if(nums[i] >= nums[n/2]){
        //     }
        // } return nums[i];
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];


    }
};