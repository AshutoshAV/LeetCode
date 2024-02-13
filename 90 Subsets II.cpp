class Solution {
public:
    vector<vector<int>> subsets;
    vector<int> set;
    std::set<vector<int>> allset;
    void gen(vector<int> &nums,int i,int n) {
        if(i==n) {
            allset.insert(set);
            return;
        }
        gen(nums,i+1,n);
        set.push_back(nums[i]);
        gen(nums,i+1,n);
        set.pop_back();

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // std::set<int> numbers;
        sort(nums.begin(),nums.end());
        subsets.clear();
        gen(nums,0,nums.size());
        for(auto &i : allset) {
            subsets.push_back(i);
        }
        return subsets;
    }
};
