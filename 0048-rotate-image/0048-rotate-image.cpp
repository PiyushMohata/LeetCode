class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>v=matrix;

        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                matrix[i][j]=v[matrix.size()-1-j][i];
            }
        }
        v.clear();
    }
};