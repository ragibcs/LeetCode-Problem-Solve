class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        count =defaultdict(int)
        for i in s:
            count[i]+=1
        for c, i in enumerate(s):
            if count[i]==1:
                return c
        return -1
