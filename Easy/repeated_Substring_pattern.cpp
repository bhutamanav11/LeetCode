class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string double_s = s+s;
        string trimmed = double_s.substr(1,double_s.length()-2);
        if(trimmed.find(s)!=string::npos){
            return true;
        }
        else{
            return false;
        }
    }
};
