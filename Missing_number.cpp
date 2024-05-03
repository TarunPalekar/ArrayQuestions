#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        int n=nums.size();
        int Sum=0;
       int totalSum;
        totalSum=(n*(n+1))/2;
       
        return  totalSum-accumulate(nums.begin(), nums.end(), 0);
        
    }
};