class Solution {
public:
    bool isHappy(int n) {
	bool answer=false;

	int temp=n;
	int dig;
	int sq=0;

    map<int,int> tru;

	while(true){
		while(temp){
			dig=temp%10;
			sq=sq+dig*dig;
			temp=temp/10;
		}
		if(sq==1){
			answer=true;
			break;
		}
		if(tru.count(sq)) break;
		temp=sq;
		tru[sq]++;

		//cout<<sq<<endl;
		sq=0;
	}
	return answer;


    }
};
