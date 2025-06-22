class Solution {
public:
    int signFunc(int x){
        if(x>0) return 1;
        if(x<0) return -1;
        return 0;
        }
    int prod = 1;   
    int arraySign(vector<int>& nums) {
        for (int i = 0;i<nums.size();i++){
            prod = prod*nums[i];
        }
        return signFunc(prod);
    }
};
