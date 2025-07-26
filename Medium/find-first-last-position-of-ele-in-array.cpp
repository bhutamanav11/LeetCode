class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums,target);
        int last = findLast(nums,target);
        return {first,last};
    }
        int findFirst(vector<int>& nums,int target){
            int l = 0;
            int r = nums.size()-1;
            int res = -1;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(nums[mid]==target){
                    res = mid;
                    r = mid-1;
                }
                else if(nums[mid]<target){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            return res;
        }
int findLast(vector<int>& nums,int target){
            int l = 0;
            int r = nums.size()-1;
            int res = -1;
            while(l<=r){
            int mid = l+(r-l)/2;
                if(nums[mid]==target){
                    res = mid;
                    l = mid+1;
                }
                else if(nums[mid]<target){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            return res;
        }
};
