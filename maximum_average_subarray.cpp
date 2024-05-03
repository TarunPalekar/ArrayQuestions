#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int j=k-1;
        int i=0;
        for (int y = i; y <=j ; y++) {
            sum += nums[y];
        }
        int maxi;
        maxi = sum;
        j++;
       
        
       while(j<nums.size()){
           sum+=nums[j++];
           sum-=nums[i++];
           maxi=max(maxi, sum);
       }
       double maxAvg=maxi/(double)k;
       return maxAvg;
        // int maxi=INT_MIN;
        // for(int i=0;i<=nums.size()-k;i++){
        //     int sum=0;
        //     for(int j=i;j<i+k;j++){
        //         sum+=nums[j];
        //     }
        //     maxi=max(maxi, sum);
        // }
        // return double(maxi)/k;
    }
};