class Solution {
public:
    vector<vector<int>> allset;

    void gen(vector<int> &nums,int i,vector<int> &subset){
        if(i==nums.size()){
            allset.push_back(subset);
            return;
        }

        gen(nums,i+1,subset);

        subset.push_back(nums[i]);
        gen(nums,i+1,subset);
        subset.pop_back();

        }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<int> subset;
        gen(nums,0,subset);
        return allset;

    }
};
