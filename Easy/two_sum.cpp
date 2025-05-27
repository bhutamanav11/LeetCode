class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numindices;

        for(int i = 0;i<nums.size();i++){
            int complement = target - nums[i];
        
        if(numindices.find(complement) != numindices.end()){
            return{numindices[complement],i};
        }   
        numindices[nums[i]] = i;
        }
        return {};
    }
};
