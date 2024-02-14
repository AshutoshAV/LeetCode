class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int top=0,low=matrix.size()-1,left=0,right=matrix[0].size()-1;
        int dir=0;
        int ele=(matrix[0].size()-1)*(matrix.size()-1);
        while(top<=low && left<=right) {
            if(dir==0){
                for(int i=left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }

                top++;
            }
            if(dir==1){
                for(int i=top;i<=low;i++){
                    res.push_back(matrix[i][right]);
                }

                right--;
            }
            if(dir==2){
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[low][i]);
                }

                    low--;
            }
            if(dir==3){
                for(int i=low;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }

                left++;
            }
             dir++;
                dir=dir%4;
        }
        return res;
    }
};
