#include<iostream>
using namespace std;
    // int i=0;
    //  int j=1;
    //  int n;

    // nums[j] = nums[j] + nums[i];
    //  if(nums[j] == nums[n-i]){
    //      return true;
    //  }
    //  else{
    //      return false;
    //  } 
    //this passed 1 test case though

     int n = nums.size();
    int reachable = 0;

    for(int i = 0; i<n; ++i){
        if(reachable < i)
        return false;

        reachable = max(reachable, i + nums[i]);
    }
    return true;