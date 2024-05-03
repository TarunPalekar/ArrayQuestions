#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
      int first=nums[0];
      int x=1;
      int k=1;
      for(int i=1;i<nums.size();){
          if(nums[i]==first){
              i++;
          }
          else{
              nums[x]=nums[i];
              first=nums[i];
              x++;
              i++;
              k++;
              
          }
      }
      return k;
    }
};