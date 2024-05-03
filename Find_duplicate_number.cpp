#include<bits/stdc++.h>
using namespace std;
class Solution
    {
    public:
        int findDuplicate(vector<int> &nums)
        {
         
          int slow=nums[0];
          int fast=nums[0];
          slow=nums[slow];
          fast=nums[nums[fast]];
          while(fast!=slow){
            fast=nums[fast];
            fast=nums[fast];
            slow=nums[slow];

            
          }
          slow=nums[0];
          while(slow!=fast){
            fast=nums[fast];
            slow=nums[slow];
          }
          return slow;

        }
    };