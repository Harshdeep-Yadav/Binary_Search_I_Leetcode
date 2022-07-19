
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) 
    {
         int n=nums2.size();
        int ans=0;
        for(int i=0;i<nums1.size();i++){
            int x= lower_bound(nums2.rbegin(),nums2.rend(),nums1[i])-nums2.rbegin();
            ans=max(ans,n-x-1-i);
        }
        return ans;
    }
};


	// int ans = 0;
	// 	int i = 0;
	// 	int j = 0;
	// 	while(i < nums1.size() and j < nums2.size()){
	// 		if(nums1[i] <= nums2[j]){
	// 			if(i <= j){
	// 				ans = max(ans, j - i);
	// 			}
	// 			j++;
	// 		}
	// 		else{
	// 			i++;
	// 		}
	// 	}
	// 	return ans;