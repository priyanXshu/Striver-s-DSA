class Solution {
public:
    int reversePairs(vector<int>& nums) {
        long long cnt = 0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] > 2*(long long)nums[j]) cnt++;
            }
        }
        return cnt;
    }
};
