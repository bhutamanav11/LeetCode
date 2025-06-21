class Solution {
public:
    int strStr(string haystack, string needle) {
        int len_haystack = haystack.length();
        int len_needle = needle.length();
        for (int i = 0;i<=len_haystack;i++){
            if(haystack.substr(i,len_needle) == needle){
                return i;
            }
        }
        return -1;
    }
};
