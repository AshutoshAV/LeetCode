class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int fast=0,last=0;
	while(fast<size){
		if (nums[fast]==0)
		{
			fast++;
			continue;
		}else{
			nums[last]=nums[fast];
			last++;
			fast++;
		}
	}
	while(last<size){
		nums[last]=0;
		last++;
	}
    }
};
