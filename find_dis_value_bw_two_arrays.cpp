class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        // int n1=arr1.size(),n2=arr2.size();
        // int ans=n1;
        // for(int i=0;i<n1;i++)
        // {
        //     for(int j=0;i<n2;j++)
        //     {
        //         if(abs(arr1[i]-arr2[j])<=d)
        //         {
        //             ans--;
        //             break;
        //         }
        //     }
        // }
        // return ans;
        int size1= arr1.size(), size2= arr2.size();
        int res = size1;
        for(int i = 0; i < size1; i ++) {
            for(int j = 0; j < size2; j ++) {
                if(abs(arr1[i] - arr2[j]) <= d) {
                    res --;
                    break;
                }
            }
        }
        return res   ;
    }
};
        
        