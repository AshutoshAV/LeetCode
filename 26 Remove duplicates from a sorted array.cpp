class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fast=0, slow=0;
        while(fast<nums.size()) {
            if(nums[fast] == nums[slow]) {
                fast ++; continue;
            } else {
                slow++;
                nums[slow]=nums[fast];
                fast ++;
                continue;
            }
        }
        slow++;
        return slow;
    }
};
