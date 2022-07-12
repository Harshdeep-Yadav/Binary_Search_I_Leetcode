class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n =nums.size()-1;
        int low=0;
        int high=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target)
            {
                low+=1;
            }
            else 
            {
                high-=1;
            }
        }
        return low;
    }
};