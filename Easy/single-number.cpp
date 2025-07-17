class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int p:nums){
            result ^= p;
        }
        return result;
    }
};
