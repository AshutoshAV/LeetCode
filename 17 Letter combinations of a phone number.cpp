class Solution {
public:
    vector<string> res;
    string s;

    void gen(string &digits, string &s, int i){
        if(i==(digits.size()) ){
            res.push_back(s);
            return;
        }
        if(digits[i]=='2'){
            s.push_back('a');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('b');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('c');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='3'){
            s.push_back('d');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('e');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('f');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='4'){
            s.push_back('g');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('h');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('i');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='5'){
            s.push_back('j');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('k');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('l');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='6'){
            s.push_back('m');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('n');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('o');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='7'){
            s.push_back('p');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('q');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('r');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('s');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='8'){
            s.push_back('t');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('u');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('v');
            gen(digits,s,i+1);
            s.pop_back();
        }else if(digits[i]=='9'){
            s.push_back('w');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('x');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('y');
            gen(digits,s,i+1);
            s.pop_back();
            s.push_back('z');
            gen(digits,s,i+1);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            res.clear();
            return res;
        }else{
                    int i=0;
        gen(digits,s,i);
        return res;
        }


    }
};
