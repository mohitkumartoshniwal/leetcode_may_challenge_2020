//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/

class Solution
{
public:
    int findComplement(int num)
    {
        int copy = num;
        int i = 0;

        while (copy != 0)
        {
            copy >>= 1;      //to get the number of digits in the number
            num ^= (1 << i); //flipping the number
            i++;
        }
        return num;
    }
};