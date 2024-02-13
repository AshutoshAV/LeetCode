class Solution {
public:
    int climbStairs(int n) {
        vector<int> ways(n+1);
	    ways[0]=1;
	    int i=1;
	    while(i<=n){
		    if(i==1) {ways[i]=1;i++; continue;}
		    else{
        		ways[i]=ways[i-1]+ways[i-2];
		        i++;
            }
	    }
        int way=ways[n];
        return way;
    }
};
