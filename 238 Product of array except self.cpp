class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        	int size=nums.size();
	vector<int> res(size);
	int prod=1;
	for(int i=0;i<size;i++){
		prod*=nums[i];
		res[i]=prod;
	}
	prod=1;
	for(int i=size-1;i>0;i--) {
		res[i]=res[i-1]*prod;
		prod*=nums[i];
	}
	res[0]=prod;
        return res;
    }
};
