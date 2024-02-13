class Solution {
public:
    bool isValid(string s) {
        char top;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char top=(st.empty())?'$':st.top();
            if(s[i]==')' && top=='('){
                st.pop();
                continue;
            } else if(s[i]=='}' && top=='{') {
                st.pop();
                continue;
            } else if(s[i]==']' && top=='[') {
                st.pop();
                continue;
            } else {
                st.push(s[i]);
            }

        }
        return st.empty()?true:false;
    }
};
