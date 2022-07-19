class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        // int n=grid.size();
        // int m=grid[0].size();
        // int l=0;
        // int h=m*n-1;
        // int count=0;
        // while(l<=h)
        // {
        //    if(grid[l][h]<0)
        //    {
        //         count++;
        //         l+=1;
        //    }
        //     else
        //         h-=1;
        // }
        // return count;
        int ans=0;
        int m(grid.size()), n(grid[0].size()), r(0), c(n - 1);
        while (r < m) {
            while (c >= 0 && grid[r][c] < 0) c--;
            ans += n - c - 1;
            r++;
        }
        return ans;
    }
};