#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &matrix)
    {
        int n = matrix.size();
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(matrix[start], matrix[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++)
        {
            for (int j = i; j < col; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < row; i++)
        {
            reverseArray(matrix[i]);
        }
    }
};