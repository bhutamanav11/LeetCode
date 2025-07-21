class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++){
            freq[nums1[i]]++;
        }
        for(int i = 0;i<m;i++){
            if(freq[nums2[i]]>0){
                result.push_back(nums2[i]);
                freq[nums2[i]]--;
            }
        }
        return result;
    }
};
