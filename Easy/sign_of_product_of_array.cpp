class Solution {
public:
    int signFunc(int x){
        if(x > 0) return 1;
        if(x < 0) return -1;
        return 0;
    }

    int arraySign(vector<int>& nums) {
        int negativeCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                return signFunc(0);  // required
            if (nums[i] < 0)
                negativeCount++;
        }

        // if count of negatives is even → positive (1)
        // if odd → negative (-1)
        return signFunc(negativeCount % 2 == 0 ? 1 : -1);  // required
    }
};
