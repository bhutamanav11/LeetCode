class Solution {
public:
    int romanToInt(string s) {
    std::unordered_map<char, int> convert = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
        int total = 0;
        int prevValue = 0;
        for (char c :s){
            int currentvalue = convert[c];

            if(currentvalue > prevValue){
                total += currentvalue -2*prevValue;
            }
            else{
                total += currentvalue;
            }
            prevValue = currentvalue;
        }
        return total;
    }
};
