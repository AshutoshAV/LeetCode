class Solution {
public:
    string reverseWords(string s) {
        char c;
	int left=0,right,space=0;
	int size=s.size();
	int i=0;
	while(i<size){
		c=s[i];
		if(c==' '){
			space=i;
//			cout<<space<<" ";
			right=space-1;
			while(left<right){
				c=s[left];
				s[left]=s[right];
				s[right]=c;
				left++; right--;
				}
				left=space+1;
		}
		i++;
	}
	right=size-1;
	while(left<right){
				c=s[left];
				s[left]=s[right];
				s[right]=c;
				left++; right--;
				}
	return s;
    }
};
