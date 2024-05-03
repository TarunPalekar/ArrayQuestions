#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        for(int i=1;i<nums.size();i++){
            rightsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(leftsum==rightsum){
                return i;
            }
            leftsum+=nums[i];
            if((i+1)<nums.size()){
                rightsum-=nums[i+1];
            }

        }
        return -1;
        // for(int i=0;i<nums.size();i++){
        //     int leftsum=0;
        //     for(int j=0;j<i;j++){
        //         leftsum+=nums[j];
        //     }
        //     int rightsum=0;
        //     for(int k=i+1;k<nums.size();k++){
        //         rightsum+=nums[k];

        //     }
        //     if(leftsum==rightsum){
        //         return i;
        //     }
        //     else{
        //         continue;
        //     }
        // }


        // return -1;
        
    }
};