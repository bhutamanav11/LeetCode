class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

        string prefix = strs[0]; // initialize to first word of this list

        for (int i = 1;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
                prefix = prefix.substr(0,prefix.length()-1);// reduce the prefix by 1 to check and update again
                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};
