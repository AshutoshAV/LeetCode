class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int mid,index=-1;
        while(left<=right) {
            mid=left+(right-left)/2;
            if(nums[mid]==target) {
                index=mid;
                break;
            } else if (nums[mid]<target) {
                left=mid+1;
                continue;
            } else {
                right=mid-1;
                continue;
            }
        }
        return index;
    }
};