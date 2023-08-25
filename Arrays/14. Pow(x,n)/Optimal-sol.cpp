class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long num = n;
        while(num){
            if(num < 0){
                num = -1 * num;
            }
            if(num%2 == 0){
                x = x * x;
                num /= 2;
            }
            else{
                ans = ans * x;
                num = num - 1;
            }
        }
        if(n < 0){
            ans = (double)1.0 / (double)ans;
        }
        return ans;
    }
};
