#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int start=0;
        int end=n-1;
        int index=0;
        while(index<=end){
            if(nums[index]==0){
                swap(nums[index], nums[start]);
                start++;
                index++;
                

            }
            else if(nums[index]==2){
                swap(nums[index], nums[end]);
                end--;
            }
            else{
                index++;
            }

           
        }
        
    }
};