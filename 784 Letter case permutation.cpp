class Solution {
public:

string str;
vector<string> strs;

void gen(string& s,int i, string &str){
	char c=s[i];
	if(i==s.size()){
		// cout<<str;
        strs.push_back(str);
		return;
	}
	if(c>=65 && c<=90){
		str.push_back(c);
		gen(s,i+1,str);
		str.pop_back();

		c=c+32;

		str.push_back(c);
		gen(s,i+1,str);
		str.pop_back();
	}else if(c>=97 && c<=122){
		str.push_back(c);
		gen(s,i+1,str);
		str.pop_back();

		c=c-32;

		str.push_back(c);
		gen(s,i+1,str);
		str.pop_back();
	}else{
		str.push_back(c);
		gen(s,i+1,str);
		str.pop_back();
	}
}

    vector<string> letterCasePermutation(string s) {
        gen(s,0,str);
        return strs;

    }
};
