class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m+n);
        int i = 0;
        int j = 0;
        int k = 0;
        while(i < m && j < n){
            if(nums1[i]<nums2[j]){
                nums3[k] = nums1[i];
                i++;
            }
            else{
                nums3[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            nums3[k] = nums1[i];
            i++;
            k++;
        }
        while(j<n){
            nums3[k] = nums2[j];
            j++;
            k++;
        }
        for(int t = 0;t<m+n;t++){
            nums1[t] = nums3[t];
        }
    }
};
