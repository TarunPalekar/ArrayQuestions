#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<int> factorial(int N){
        vector<int> ans;
        int carry=0;
        ans.push_back(1);
        for(int i=2;i<=N;i++){
            for(int j=0;j<ans.size();j++){
                int x=ans[j]*i+carry;
                ans[j]=x%10;
                carry=x/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry=carry/10;
            }
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
       
    }
};