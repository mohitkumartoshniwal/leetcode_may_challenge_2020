
//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {

        unordered_set<char> hs;

        for (char i : J)
        {
            hs.insert(i);
        }
        int count = 0;
        for (char i : S)
        {
            if (hs.find(i) != hs.end())
            {
                count++;
            }
        }
        return count;
    }
};
