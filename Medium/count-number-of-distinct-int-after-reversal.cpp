class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>original = nums;
        int n = original.size();

        for(int i = 0;i<n;i++){
            int x = original[i];
            int rev = 0;
            while(x != 0){
                rev = rev*10 + x % 10;
                x = x/10;
            }
            nums.push_back(rev);
        }
        unordered_set<int> s(nums.begin(),nums.end());
        return s.size();
    }
};
