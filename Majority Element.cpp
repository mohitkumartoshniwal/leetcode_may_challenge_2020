//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> hm;

        for (int i : nums)
        {
            hm[i]++;
            if (hm[i] > floor(nums.size() / 2))
            {
                return i;
            }
        }
        return -1;
    }
};