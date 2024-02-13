class Solution {
public:
    string addStrings(string num1, string num2) {
        int i,j;
	string answer;
	int sum=0,carry=0;
	int dig=0;
	char c;
	for(i=num1.size()-1,j=num2.size()-1;i>=0 || j>=0; i--,j--) {
		if(i<0){
			sum= num2[j]-'0' + carry;
		}
		if (j<0) {
			sum=num1[i]-'0' + carry;
		}
		if(j>=0 && i>=0){
			sum=num1[i]-'0' + num2[j]-'0' + carry;
		}
		dig=sum%10;
		c=dig+'0';
		answer.push_back(c);
        carry=sum/10;
		sum=sum/10;
	}
        if(carry) {
            char car=carry+'0';
	answer.push_back(car);
        }

    reverse(answer.begin(),answer.end());
        return answer;

    }
};
