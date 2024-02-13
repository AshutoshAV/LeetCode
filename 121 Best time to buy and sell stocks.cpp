class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost,currProfit=-1,maxProfit=-1;
        int size=prices.size();
        cost=prices[0];
        for(int i=0; i<size;i++){
            currProfit=prices[i]-cost;
            if(maxProfit<currProfit) maxProfit=currProfit;
            if(currProfit<0) cost=prices[i];
        }
        return maxProfit;
    }
};
