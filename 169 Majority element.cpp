class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int element,ctr=0;
        for(int i=0;i<size;i++){
            if(ctr==0){
                element=nums[i];
            }
            if(nums[i]==element){
                ctr++;
            }else{
                ctr--;
            }
        }
        return element;
    }
};
