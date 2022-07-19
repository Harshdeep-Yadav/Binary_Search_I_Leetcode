class Solution {
public:
    int findMin(vector<int>& nums)  // O(log n) using binary Search
    {
        int n=nums.size();
        int l=0;
        int h=n-1;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(nums[h]>=nums[mid])
            {
                h=mid;
            }
            else{
                l=mid+1;    
            }
        }
        return nums[l];
    }
};