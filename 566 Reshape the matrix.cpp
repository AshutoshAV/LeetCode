class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int l=mat.size();
        int s=mat[0].size();
        if(r*c !=l*s) return mat;

        vector<vector<int>> nat(r,vector<int>(c));
        for(int i=0;i<r*c;i++){
            nat[i/c][i%c]=mat[i/s][i%s];
        }
        return nat;
    }
};
