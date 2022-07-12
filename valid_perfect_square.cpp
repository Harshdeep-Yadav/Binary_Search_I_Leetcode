class Solution {
public:
    bool isPerfectSquare(int num) {
        // int l=1;
        // int r=num;
        // while(l<=r){
        //     int mid=(l+r)/2;
        //     // long midsqr=mid*mid;
        //     if((mid*mid)==num)
        //     {
        //         return true;
        //     }else if((mid*mid)>num){
        //         r=mid-1;
        //     }else{
        //         l=mid+1;
        //     }
        // }
        // return false;
        int a=1;
        while(num>0){
            num-=a;
            a+=2;
        }
        return(num==0);
    }
};