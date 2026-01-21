class Solution(object):
    def countKeyChanges(self, s):
        """
        :type s: str
        :rtype: int
        """
        temp=0
        for i in range(1,len(s)):
            if( s[i].lower()!=s[i-1].lower()):
                temp+=1

        return temp