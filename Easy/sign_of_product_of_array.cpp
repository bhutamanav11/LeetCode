class Solution {
public:
    int signFunc(int x){
        if(x > 0) return 1;
        if(x < 0) return -1;
        return 0;
    }

    int arraySign(vector<int>& nums) {
        int prod = 1;

        for (int i = 0; i < nums.size(); i++) {
            prod *= nums[i];
        }

        return signFunc(prod);
    }
};
