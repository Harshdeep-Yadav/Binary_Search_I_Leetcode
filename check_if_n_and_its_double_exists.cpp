class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // int n=arr.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[i]==2*arr[j]||arr[i]%2==0){
        //             return true;
        //         }
        //     }
        // }
        // return false;
          int pointer_one = -1;
        int pointer_two = -1;
        
        for (pointer_one = 0; pointer_one < arr.size(); pointer_one++) {
            int n = arr[pointer_one];
            for (pointer_two = pointer_one + 1; pointer_two < arr.size(); pointer_two++) {
                int m = arr[pointer_two];
                if ( n == (2 * m) || m == (2 * n)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};