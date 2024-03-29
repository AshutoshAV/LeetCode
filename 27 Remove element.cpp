class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast=0,slow=0;

        while(fast<nums.size()){

            if(nums[fast]==val ) {
                fast ++; continue;
            } else {
                nums[slow]=nums[fast];
                slow++; fast ++;
                continue;
            }
        }
        return slow;
    }
};
