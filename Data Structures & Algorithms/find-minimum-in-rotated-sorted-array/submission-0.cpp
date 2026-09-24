class Solution {
public:
    int findMin(vector<int> &nums) {
        //binary search approach
        int n = nums.size();
        int low = 0,high = n-1;
        int mid = 0;
        int ans = nums[0];
        while(low<=high){
            //when the array is already sorted
            if(nums[low]<nums[high]){
                ans = min(ans,nums[low]);
                break;
            }
            int mid = low+(high-low)/2;
            //what if mid is the ans? 
            ans = min(ans,nums[mid]);
            //left side is already sorted
            if(nums[mid]>=nums[low]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};
