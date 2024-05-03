#include <bits/stdc++.h>
using namespace std;
void wavePrintAMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    for (int startCol = 0; startCol < col; startCol++)
    {
        // for even column
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << matrix[i][startCol];
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << matrix[i][startCol];
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};
    wavePrintAMatrix(matrix);

    return 0;
}