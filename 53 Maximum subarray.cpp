class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        int sum=0,maxsum=nums[0];
        for(int i=0;i<size;i++){
            sum+=nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};
