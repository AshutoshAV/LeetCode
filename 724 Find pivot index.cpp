class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        vector<int> prefix;
        vector<int> postfix(size);
        int sum=0;
        for(int i : nums){
            prefix.push_back(sum);
            sum+=i;

        }
        sum=0;
        for(int i=size-1;i>=0;i--) {
            sum+=nums[i];
            postfix[i]=sum;

        }
        postfix.push_back(0);
        int index=-1;
        for(int i=0;i<size;i++) {
            if(prefix[i]==postfix[i+1]) {
                index=i;
                break;
            }
        }
        return index;
    }
};
