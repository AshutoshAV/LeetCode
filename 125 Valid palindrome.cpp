class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1) return true;

        string s1;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z') s1.push_back(s[i]);
            else if(s[i]>='0' && s[i]<='9') s1.push_back(s[i]);
             else if(s[i]>='A' && s[i]<='Z') s1.push_back(s[i]-'A' + 'a');
             else continue;
        }
        int left=0,right=s1.size()-1;
        int flag=0;
        while(left<right){
            if(s1[left]!=s1[right]){
                flag++;
                break;
            }
            left++; right--;
        }
        cout<<s1;
        return (flag?false:true);
        // cout<<s1;
        // return true;

    }
};
