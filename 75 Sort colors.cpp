class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0,right=0;
        int size=nums.size();
        for(int i:nums){
            if(i==0) left++;
            if(i==1) right++;
        }
        nums.clear();
        int i=0;
        right+=left;
        while(i<left){
            nums.push_back(0);
            i++;
        }
        while(i<right){
            nums.push_back(1);
            i++;
        }
        while(i<size){
            nums.push_back(2);
            i++;
        }

    }
};
