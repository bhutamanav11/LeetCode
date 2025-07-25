class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(),nums1.end());
        std::unordered_set<int> resultSet;
        for(int num : nums2){
            if(set1.count(num)){
                resultSet.insert(num);
            }
        }
        return std::vector<int>(resultSet.begin(),resultSet.end());
    }
};
