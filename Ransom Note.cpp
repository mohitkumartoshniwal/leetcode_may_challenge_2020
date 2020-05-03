//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rans[26]={0};
        int mag[26]={0};
        
        for(char i : ransomNote){
            rans[i-'a']++;
        }
        
        for(char i : magazine){
            mag[i-'a']++;
        }
        
        for(char i:ransomNote){
            if(mag[i-'a']<rans[i-'a']){
                return false;
            }
        }
        return true;
    }
};