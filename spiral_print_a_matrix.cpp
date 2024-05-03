#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int total_element=m*n;
        vector<int> ans;

        int startingRow=0;
        int startingCol=0;
        int endingRow=m-1;
        int endingCol=n-1;

        int count=0;
        while(count<total_element){
            //print startingRow
            for(int i=startingCol;i<=endingCol &&count<total_element;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;

            }
            startingRow++;
            //print endingCol
            for(int i=startingRow;i<=endingRow &&count<total_element;i++){
                ans.push_back(matrix[i][endingCol]);
                 count++;
            }
            endingCol--;

            //print endingRow
            for(int i=endingCol;i>=startingCol &&count<total_element;i--){
                ans.push_back(matrix[endingRow][i]);
                 count++;
            }
            endingRow--;
            //print startingCol
            for(int i=endingRow;i>=startingRow && count<total_element;i--){
                ans.push_back(matrix[i][startingCol]);
                 count++;

            }
            startingCol++;


        }
        return ans;
        
    }
};