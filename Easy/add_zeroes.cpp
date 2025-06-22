class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzeropos = 0;
        for (int i = 0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[nonzeropos] = nums[i];
                nonzeropos++;
            }
        }
        while(nonzeropos<nums.size()){
                nums[nonzeropos] = 0;
                nonzeropos++;
        }
    }
};
