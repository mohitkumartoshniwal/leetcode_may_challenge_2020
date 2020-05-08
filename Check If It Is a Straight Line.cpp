//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)
            return true;
        
        int dy=(coordinates[1][1]-coordinates[0][1]);
        int dx=(coordinates[1][0]-coordinates[0][0]);
        
        for(int i=2;i<coordinates.size();i++){
       
            if(dx*(coordinates[i][1]-coordinates[0][1])!=dy*(coordinates[i][0]-coordinates[0][0]))
                return false;
        }
        return true;
    }
};