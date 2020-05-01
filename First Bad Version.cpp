//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/
//https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {

        int start = 1, end = n;
        int mid = 0;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (!isBadVersion(mid))
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start;
    }
};

//resources

//https://leetcode.com/problems/first-bad-version/discuss/71296/O(lgN)-simple-Java-solution
//http://www.cs.cornell.edu/courses/cs211/2006sp/Lectures/L06-Induction/binary_search.html
