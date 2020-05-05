//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

class Solution {
public:
    int firstUniqChar(string s) {
        int map[26]={0};
        for(char i:s){
            map[i-'a']++;
        }
        int idx=0;
        for(char i:s ){
            if(map[i-'a']==1){
                return idx ;
            }
            idx++;
        }
        return -1;
        
    }
};