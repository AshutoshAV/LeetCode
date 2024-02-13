class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size=matrix[0].size();
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<size;i++){
            for(int j=0;j<(size+1)/2;j++){
                swap(matrix[i][j],matrix[i][size-j-1]);
            }
        }

    }
};
