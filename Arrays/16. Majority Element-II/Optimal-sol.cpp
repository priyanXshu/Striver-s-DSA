class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt_1 = 0;
        int cnt_2 = 0;
        int ele_1, ele_2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == ele_1){
                cnt_1++;
            }
            else if(nums[i] == ele_2){
                cnt_2++;
            }
            else if(cnt_1 == 0){
                ele_1 = nums[i];
                cnt_1++;
                continue;
            }
            else if(cnt_2 == 0){
                ele_2 = nums[i];
                cnt_2++;
                continue;
            }
            else{
                cnt_1--;
                cnt_2--;
            }
        }
        vector<int> ans;
        cnt_1 = 0, cnt_2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == ele_1){
                cnt_1++;
            } 
            if(nums[i] == ele_2){
                cnt_2++;
            }
        }
        if(cnt_1 > (nums.size()/3))
            ans.push_back(ele_1);
        if(cnt_2 > (nums.size()/3))
            ans.push_back(ele_2);
        return ans;
    }
};
