class Solution {
public:
    string toLowerCase(string s) {
        for(char &letter:s){
            letter = tolower(letter);
        }
        return s;
    }
};
