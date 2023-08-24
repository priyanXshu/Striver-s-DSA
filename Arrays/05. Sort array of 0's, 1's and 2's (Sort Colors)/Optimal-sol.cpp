class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n; i++){
            for(int j=1; j<n-i; j++){
                if(nums[j-1]>nums[j]){
                    swap(nums[j-1], nums[j]);
                }
            }
        }
    }
};
