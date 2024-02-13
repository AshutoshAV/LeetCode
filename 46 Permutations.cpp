class Solution {
public:
    vector<vector<int>> answer;
    void gen(vector<int> &nums, int i, int n){
        if(i==n){
            answer.push_back(nums);
            return;
        }
        gen(nums,i+1,n);
        for(int j=i+1;j<=n;j++){
            swap(nums[i],nums[j]);
            gen(nums,i+1,n);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size()-1;
        gen(nums,0,n);
        return answer;
    }
};
