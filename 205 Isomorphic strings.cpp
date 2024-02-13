class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool answer=true;
        map<char, char> tru;
	    map<char, char>::iterator it;
		for(int i=0;i<s.size();i++) {
			if(tru.count(s[i])){
				it=tru.find(s[i]);
				if(it->second!=t[i]){
					answer=false;
					//cout<<"no";
					break;

				}
			} else {
				tru.insert({s[i],t[i]});
			}
		}
        tru.clear();
		for(int i=0;i<t.size();i++) {
			if(tru.count(t[i])){
				it=tru.find(t[i]);
				if(it->second!=s[i]){
					answer=false;
					//cout<<"no";
					break;

				}
			} else {
				tru.insert({t[i],s[i]});
			}
		}
        return answer;
    }
};
