class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = cols - 1;
        int top = 0;
        int bottom = rows - 1;
        vector<int> result;


        while (left <= right && top <= bottom)
        {
            for (int j = left; j <= right; j++)
            {
                result.push_back(matrix[top][j]);
            }
            top++;

            for (int i = top; i <= bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom)
            {
                for (int j = right; j >= left; j--)
                {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
