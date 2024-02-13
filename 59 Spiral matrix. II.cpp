class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int ctr=1;
        for(int layer=0;layer<(n+1)/2;layer++) {
            for(int i=layer;i<n-layer;i++){
                matrix[layer][i]=ctr++;
            }
            for(int i=layer+1;i< n-layer;i++){
                matrix[i][n-layer-1]=ctr++;
            }
            for(int i=n-layer-2;i>=layer;i--){
                matrix[n-layer-1][i]=ctr++;
            }
            for(int i=n-layer-2;i>layer;i--){
                matrix[i][layer]=ctr++;
            }

        }


        return matrix;

    }
};
