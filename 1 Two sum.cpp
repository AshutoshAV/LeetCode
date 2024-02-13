class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if((nums[i]+nums[j])==target){
                    pos.push_back(i);
                    pos.push_back(j);
                }
            }
        }
        return pos;
    }
};
