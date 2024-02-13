class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniq=0;
        for(int i=0;i<nums.size();i++){
            uniq=uniq^nums[i];
        }
        return uniq;
    }
};
