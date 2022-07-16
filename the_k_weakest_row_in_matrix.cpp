
        }
        sort(mat.begin(),mat.end());
        vector<int> ans(k);
        for(int i=0;i<k;i++)
        {
            ans[i]=mat[i][n];
        }
        return ans;       
    }