//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        for(int o:nums){
            ans^=o;
        }
        return ans;
        
        
    }
};