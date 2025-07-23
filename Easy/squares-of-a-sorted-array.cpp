class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            int n = nums[i]*nums[i];
            result.push_back(n);
        }
        sort(result.begin(),result.end());
        return result;
    }
};
