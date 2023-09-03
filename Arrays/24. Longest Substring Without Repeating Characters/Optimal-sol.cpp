class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int start = -1;
        vector<int> pos(256, -1);
        for(int i=0; i<s.length(); i++){
            if(pos[s[i]] > start){
                start = pos[s[i]];
            }
            pos[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
