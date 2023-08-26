class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto i: mp){
            if(i.second > (nums.size()/2)){
                return i.first;
            }
        }
        return -1;
    }
};
