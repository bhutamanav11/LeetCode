class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> set1;
        for (int num : nums) {
            set1.insert(num);
            if (set1.size() > 3) {
                set1.erase(set1.begin()); 
            }
        }
        if (set1.size() == 3) {
            return *set1.begin(); 
        } else {
            return *set1.rbegin(); 
    }
    }
};
