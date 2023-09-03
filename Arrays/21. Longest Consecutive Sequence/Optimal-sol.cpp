class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        unordered_set<int> st;
        int longest = 1;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(auto i: st){
            if(st.find(i-1) == st.end()){
                int cnt = 1;
                int x = i;
                while(st.find(x+1) != st.end()){
                    x++;
                    cnt++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};
